/*
 * getting started with arduino
 * ch5 analog light sensor input
 * 5/22/18
 */

const int LED = 13;
int lightIntensity = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  //Analogue pins are automatically inputs
}

void loop() {
  // put your main code here, to run repeatedly:
  lightIntensity = analogRead(0);//read from port 0
  digitalWrite(LED,HIGH);
  delay(lightIntensity);//pause program depending on intensity

  digitalWrite(LED,LOW);//off
  delay(lightIntensity);
}
