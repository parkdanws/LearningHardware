/*
 * getting started with arduino
 * button led with memory
 * 5/20/18
 */

const int LED = 13;
const int SWITCH = 7;
int state = 0;//state of led
int val = 0;//from input
int old_val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(SWITCH,INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(SWITCH);
  
  //make sure the switch is changed only once
  if ((val == HIGH) && (old_val == LOW)){
    state = 1 - state;//clever way to switch state between two
    delay(150); //debouncing 
  }
  old_val = val;
  if (state == 1){
    digitalWrite(LED,HIGH);//led on
  }
  else{
    digitalWrite(LED,LOW);//off
  }
}
