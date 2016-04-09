
int led=7;
int tilt =2;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(tilt,INPUT);
}
void loop()
{
  if(digitalRead(tilt)==HIGH)
  {
   digitalWrite(led,LOW);//turn off the LED
  }
  else
  {
    digitalWrite(led,HIGH);//turn on the LED
  }
}


