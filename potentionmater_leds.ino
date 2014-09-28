
int leds[] ={1,2,3,4,5,6};
int x = A0;
float y;
int z;
void setup()
{
    for (int r=1; r < 6; r++)
    {
     pinMode(leds[r], OUTPUT);
    }
}

void loop()
{
  z = analogRead(x);
  y= (z*3/512);
  
  for (int s=1; s < 6; s=s+1)
  {
    if (s > y)
      {
       digitalWrite(s,HIGH);
       delay(500);
      }
    
    if (s < y )
    {
      digitalWrite(s,LOW);
      delay(500);
    }
  }
}
