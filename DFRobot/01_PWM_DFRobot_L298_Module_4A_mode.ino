/*
FOR THE DFRobot we have to make sure that we do not 
have the Direction Pins the Same Level
ever
ever
*/

int EnablePin = 5;  // Combine "E1" or "E2" pin on the DFRobot Board 

int DirectionPin1 = 10; //this is the "M1"
int DirectionPin2 = 9; //this is the "M2"


void setup () {
Serial.begin(9600);

pinMode(EnablePin, OUTPUT);
pinMode(DirectionPin1, OUTPUT);
pinMode(DirectionPin2, OUTPUT);

}

void loop () {

  Serial.println("Forward");
  digitalWrite(DirectionPin1, LOW);
  digitalWrite(DirectionPin2,  HIGH);
  
  int i;
  for ( i = 200 ; i < 255; i++ ) {
    analogWrite(EnablePin, i);
    Serial.println(i);
    delay(100);
  }  

