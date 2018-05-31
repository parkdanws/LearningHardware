const int SENSOR = 0;//pin for inpu
int val = 0;//variable to store value from sensor

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//open serial port to send back data
                     //at 9600 bits per second
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(SENSOR);
  Serial.println(val);//'print' value to serial port
  delay(100); //wait 100ms between sends
}
