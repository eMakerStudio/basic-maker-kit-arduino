int brightness = 0;
int fadeAmount = 5;
 
void setup()  { 
  pinMode(9, OUTPUT);//defines the pin9 to output;
} 
 
void loop()  { 
 
  analogWrite(9, brightness);// set the lightness;
 
  brightness = brightness + fadeAmount;//change the lightness
 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }     
 
  delay(30);                     
}

