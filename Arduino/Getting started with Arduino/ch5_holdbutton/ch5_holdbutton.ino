/*
 * getting started with arduino
 * ch5 button toggle, brightness cycle
 * 5/22/18
 */

const int LED = 9;
const int SWITCH = 7;
int val = 0;
int oval= 0;
int state= 0;

int brightness = 128;
unsigned long startTime = 0 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(SWITCH,INPUT);
}

void loop() {
  val = digitalRead(SWITCH);

  //First time pressed (from unpressed)
  if((val == HIGH) && (oval == LOW)){
    state = 1 - state;//change state
    startTime = millis();
    delay(150);
  }

  //if this is a press and hold
  if((val == HIGH) && (oval == HIGH)){
    //if we are on, and it has been held
    if (state == 1 && (millis() - startTime > 500)){
      brightness ++;
      delay(10);
    }
    if(brightness > 255){//too bright? cycle
      brightness = 0;
    }
  }
  
  oval = val;//update old value
  if (state == 1){//if on, send out on status[ppp
    analogWrite(LED,brightness);
  }
  else{
    analogWrite(LED,0);
  } 
}
