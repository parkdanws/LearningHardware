/*
 * getting started with arduino
 * led on while button is pressed
 * 5/20/18
 */
const int LED = 13;
const int BUTTON = 7;
int val = 0;//used to store state of the input pin

void setup() {
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
}

void loop() {
  val = digitalRead(BUTTON); //store input val
  //check input
  if (val == HIGH){
    digitalWrite(LED,HIGH);//led ON
  }
  else{
    digitalWrite(LED,LOW);
  }
}
