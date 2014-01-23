//this code is meant control the DFRobot h-bridge motor controller based on the l298

int en_pin = 5;
int dir_pin = 6;

void setup() {
  pinMode(en_pin, OUTPUT);
  pinMode(dir_pin, OUTPUT);
}

//main code loop
void loop() {
  goForwards(2000,255);
  goNowhere(2000);
  goBackwards(2000,255);  
}


//functions
void goForwards(int delayTime, int motorSpeed) {
  digitalWrite(dir_pin, LOW);
  analogWrite(en_pin, 255);
  delay(delayTime);
}

void goBackwards(int delayTime, int motorSpeed) {
  digitalWrite(dir_pin, HIGH);
  analogWrite(en_pin, 255);
  delay(delayTime);
}

void goNowhere(int delayTime) {
 analogWrite(en_pin, 0);
  delay(delayTime); 
}

