/*
 * gswa
 * ch5 light and analog LED
 * 5/22/18
 */

const int LED = 9;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(0);//returns up to 1023
  analogWrite(LED,val/4);//accepts up to 255
  delay(10);
}

