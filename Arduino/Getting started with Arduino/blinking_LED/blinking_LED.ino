//Getting started with arduino
//ex 4-1. blinking LED
const int LED = 13; // LED connected to digital pin 13
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH); //turn led on
  delay(2000); //1k ms
  digitalWrite(LED,LOW);//turn off
  delay(2000);//wait 1sec
  
}
