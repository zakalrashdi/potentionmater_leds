
int leds[] ={1,2,3,4,5,6};
int x = A0;
int y;
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
  y= (z*3/512) ;
  digitalWrite(y,OUTPUT);
  delay(500);
  digitalWrite(y,INPUT);
  delay(500);
}
