
int flame=A5;//Define the flame sensor input A5;
 int Beep=8;//Buzzer to D8
 int val=0; 
 void setup() 
{ pinMode(Beep,OUTPUT); 
 pinMode(flame,INPUT); 
 Serial.begin(9600);//set the baudrate to 9600
 } 
void loop() { 
val=analogRead(flame);//analog read the voltage ;
Serial.println(val); 
 if(val>=600)//if the analog data large than 600;
 { 
digitalWrite(Beep,HIGH); 
} else
 { digitalWrite(Beep,LOW); }
 }

