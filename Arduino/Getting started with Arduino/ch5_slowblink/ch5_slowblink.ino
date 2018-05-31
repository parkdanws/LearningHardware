/*
 *gettting started with arduino 
 *ch5: fading LED in/out
 *5/22/18
 */
const int LED = 9;
int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (i = 0; i< 255; i++){
    analogWrite(LED,i);
    delay(10);
  }
  for (i = 255; i>0; i--){
    analogWrite(LED,i);
    delay(10);
  }
}
