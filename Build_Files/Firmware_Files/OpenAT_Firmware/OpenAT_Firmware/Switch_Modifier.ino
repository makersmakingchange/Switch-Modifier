// Switch Modifier
// Created by Rachelle Bernier
// Stan Cassidy Centre for Rehabilitation, Rehabilitation Engineering Department
// September 2019


unsigned long potPin = A7; //potentiometer input
unsigned long enterPin = 3; //digital input signal
unsigned long exitPin = 2; //digital output signal
int temp; //temporary placeholder for analog input value from potentiometer
int holdTime; //output momentary signal duration
boolean flag = 0; //identifier to ensure user releases input before another activation can be completed


void setup() {
  pinMode(potPin, INPUT);
  pinMode(enterPin, INPUT_PULLUP);
  pinMode(exitPin, OUTPUT);
  digitalWrite(exitPin, LOW);
  //Serial.begin(9600); //uncomment for testing purposes
  delay(500);
}
void loop() {

// SECTION A: The following section of code sets a threshold for a momentary output signal duration given the input from the potentiometer.
  temp = analogRead(potPin);
  holdTime = map(temp, 0, 920, 20, 500);
  
  //Serial.println(holdTime); //uncomment for testing purposes
  if ((digitalRead(enterPin) == LOW) && flag == 0) {
    flag = 1;
    digitalWrite(exitPin, HIGH);
    delay(holdTime);
    digitalWrite(exitPin, LOW);
  }
  
  if (digitalRead(enterPin) == HIGH)
  {
  flag = 0;
  }
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// SECTION B: The following section of code sets the switch modifier to latching mode. Comment out section A if you would like the modifier to be in latching mode.
// if ((digitalRead(enterPin) == LOW) && flag == 0) {
//  flag = 1;
//  digitalWrite(exitPin, HIGH);
// }
// if ((digitalRead(enterPin) == LOW) && flag == 1) {
//  flag = 0;
//  digitalWrite(exitPin, LOW);
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////
}
