////////////////////////////////////////////////////////////
//  Date : 30/4/2020
//  Project : Lec Cube 5x5x5
//  Author : ThanhQuangLong - Admin HNLShop Team
////////////////////////////////////////////////////////////
int column[25]={23,33,22,32,44,25,35,24,34,46,27,37,26,36,48,29,39,28,38,50,31,41,30,40,52};
int layer[5]={45,47,49,51,53};
int timer = 200;
void setup()
{

  for(int i = 0 ; i < 25 ; i++)
  {
    pinMode(column[i],OUTPUT);
   }
  for(int i = 0 ; i < 5; i++)
  {
    pinMode(layer[i],OUTPUT);
   }
   freetime();
   LedAllOff();
}
void loop()
{
//  Script//

  LedAllOff();
  text_mode_basic();
}
void text_mode_basic()
{
  text_T();
  text_H();
  text_A();
  text_N();
  text_H();
  text_T();
  text_A();
  text_M();
  }
void LedAllOn()
{
  for(int i = 0; i<25; i++)
  {
    digitalWrite(column[i], 1);
  }
  for(int i = 0; i<5; i++)
  {
    digitalWrite(layer[i], 0);
  }
}
void layerOff()
{
  digitalWrite(layer[0], 1);
  digitalWrite(layer[1], 1);
  digitalWrite(layer[2], 1);
  digitalWrite(layer[3], 1);
  digitalWrite(layer[4], 1);
  }
void LedAllOff()
{
  for(int i = 0; i<25; i++)
  {
    digitalWrite(column[i], 0);
  }
  for(int i = 0; i<5; i++)
  {
    digitalWrite(layer[i], 1);
  }
}
void freetime()
{

  for(int i = 200 ; i >= 0 ; i-=10 )
  {
    LedAllOff();
    delay(i);
    LedAllOn();
    delay(i);

  }
}
void text_T()
{
  for(int i = 4; i != -1; i --)
  {
    digitalWrite(layer[i], 0);   
    
  for(int i = 0 ; i < 25 ; i++)
  {
    
    digitalWrite(column[i], 1);

    digitalWrite(column[0], 0);
    digitalWrite(column[4], 0);
    digitalWrite(column[5], 0);
    digitalWrite(column[9], 0);
    digitalWrite(column[10], 0);
    digitalWrite(column[14], 0);

    digitalWrite(column[1], 0);
    digitalWrite(column[3], 0);
    digitalWrite(column[6], 0);
    digitalWrite(column[8], 0);
    digitalWrite(column[11], 0);
    digitalWrite(column[13], 0);

    digitalWrite(column[15], 0);
    digitalWrite(column[16], 0);
    digitalWrite(column[18], 0);
    digitalWrite(column[19], 0);
    
    }
    
    delay(timer);
    layerOff();
    }
}
void text_H()
{
  for(int i = 4; i != -1; i --)
  {
    digitalWrite(layer[i], 0);   
    
  for(int i = 0 ; i < 25 ; i++)
  {
    
    digitalWrite(column[i], 1);

    digitalWrite(column[2], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[17], 0);
    digitalWrite(column[22], 0);

    digitalWrite(column[1], 0);
    digitalWrite(column[3], 0);
    digitalWrite(column[6], 0);
    digitalWrite(column[8], 0);

    digitalWrite(column[16], 0);
    digitalWrite(column[18], 0);
    digitalWrite(column[21], 0);
    digitalWrite(column[23], 0);
    }
    
    delay(timer);
    layerOff();
    }
}
void text_A()
{
  for(int i = 4; i != -1; i --)
  {
    digitalWrite(layer[i], 0);   
    
  for(int i = 0 ; i < 25 ; i++)
  {
    
    digitalWrite(column[i], 1);

    digitalWrite(column[1], 0);
    digitalWrite(column[2], 0);
    digitalWrite(column[3], 0);
    digitalWrite(column[6], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[8], 0);

    digitalWrite(column[16], 0);
    digitalWrite(column[17], 0);
    digitalWrite(column[18], 0);
    digitalWrite(column[20], 0);
    digitalWrite(column[24], 0);
    }
    
    delay(timer);
    layerOff();
    }
}
void text_N()
{
  for(int i = 4; i != -1; i --)
  {
    digitalWrite(layer[i], 0);   
    
  for(int i = 0 ; i < 25 ; i++)
  {
    
    digitalWrite(column[i], 1);
    
    digitalWrite(column[1], 0);
    digitalWrite(column[2], 0);
    digitalWrite(column[3], 0);
    digitalWrite(column[6], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    digitalWrite(column[13], 0);
    digitalWrite(column[17], 0);
    digitalWrite(column[18], 0);
    digitalWrite(column[21], 0);
    digitalWrite(column[22], 0);
    digitalWrite(column[23], 0);
    }
    
    delay(timer);
    layerOff();
    }
}
void text_M()
{
  for(int i = 4; i != -1; i --)
  {
    digitalWrite(layer[i], 0);   
    
  for(int i = 0 ; i < 25 ; i++)
  {
    
    digitalWrite(column[i], 1);
    
    digitalWrite(column[1], 0);
    digitalWrite(column[2], 0);
    digitalWrite(column[3], 0);
    digitalWrite(column[6], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[8], 0);
    digitalWrite(column[11], 0);
    digitalWrite(column[13], 0);
    digitalWrite(column[17], 0);
    digitalWrite(column[21], 0);
    digitalWrite(column[22], 0);
    digitalWrite(column[23], 0);
    }
    
    delay(timer);
    layerOff();
    }
}
void text_T2()
{
  for(int i = 0; i <4; i++)
   {
     digitalWrite(column[2], 1);
     digitalWrite(layer[i], 0);   
   
   for(int i = 0; i <5; i++)
   {
     digitalWrite(column[i], 1);
     digitalWrite(layer[4], 0);   
   }
   }
  }
void randomRain()
{
  int x = 100;
  for(int i = 0; i!=60; i+=2)
  {
    int randomColumn = random(0,25);
    digitalWrite(column[randomColumn], 0);
    digitalWrite(layer[0], 1);
    delay(x+50);
    digitalWrite(layer[0], 0);
    digitalWrite(layer[1], 1);
    delay(x);
    digitalWrite(layer[1], 0);
    digitalWrite(layer[2], 1);
    delay(x);
    digitalWrite(layer[2], 0);
    digitalWrite(layer[3], 1);
    delay(x);
    digitalWrite(layer[3], 0);
    digitalWrite(layer[4], 1);
    delay(x+50);
    digitalWrite(layer[4], 0);
    digitalWrite(column[randomColumn], 1);
  }
}
