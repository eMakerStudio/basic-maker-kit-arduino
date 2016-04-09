void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT); //defines all the LED pins to output
  Serial.begin(9600);
}
void loop() {
  int vol = analogRead(A0) * (5.0 / 1023.0*100);   //analog read the temprature sensor voltage 
Serial.print(" The temperature is:");
Serial.println(vol);
if (vol<=31)                                               //if the temprature is low
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
}
else if (vol>=32 && vol<=40)                // if the temprature is middle            
 {
   digitalWrite(13, LOW);

  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
}
else if (vol>=41)                                  //If the temprature is HIGH
{
   digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
}
delay(100);
 }

