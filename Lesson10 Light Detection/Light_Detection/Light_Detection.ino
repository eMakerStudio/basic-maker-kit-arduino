int photocellPin = 2;//define the photocellpin to D2;
int ledPin =12;
int val =0; //val to store the data;
void setup(){
pinMode(ledPin,OUTPUT);//set the ledPin to output;
Serial.begin(9600);
}
void loop(){
val = analogRead(photocellPin);
Serial.println("current light is");
Serial.println(val);
if (val<350){
//512 =2.5V, you can modify this to adjust the sensitivty;
digitalWrite(ledPin,HIGH);
}
else{
digitalWrite(ledPin,LOW);
}
delay(1000);
}

