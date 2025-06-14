const int ledPins[] = {8, 9, 10, 12, 13};
const int buttonPin = A0;
bool buttonState = LOW;
void setup() {
  for (int i = 0; i < 5; i++)
  {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);

}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW)
  {
    lightSequence();
  }
}
void lightSequence() {
  digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1],LOW);
    digitalWrite(ledPins[2],LOW);
    digitalWrite(ledPins[3],LOW);
    digitalWrite(ledPins[4],LOW);
  delay(500);

  digitalWrite(ledPins[0], HIGH);
  digitalWrite(ledPins[1], HIGH);
  digitalWrite(ledPins[2],LOW);
  digitalWrite(ledPins[3],LOW);
  digitalWrite(ledPins[4],LOW);
  delay(500);

  digitalWrite(ledPins[1], HIGH);
  digitalWrite(ledPins[2], HIGH);
  digitalWrite(ledPins[0],LOW);
  digitalWrite(ledPins[3],LOW);
  digitalWrite(ledPins[4],LOW);
  delay(500);

  digitalWrite(ledPins[2], HIGH);
  digitalWrite(ledPins[3], HIGH);
  digitalWrite(ledPins[1],LOW);
  digitalWrite(ledPins[4],LOW);
  digitalWrite(ledPins[0],LOW);
  delay(500);

  digitalWrite(ledPins[3], HIGH);
  digitalWrite(ledPins[4], HIGH);
  digitalWrite(ledPins[1],LOW);
  digitalWrite(ledPins[2],LOW);
  digitalWrite(ledPins[0],LOW);
  
  delay(500);


  digitalWrite(ledPins[4], HIGH);
   digitalWrite(ledPins[1],LOW);
  digitalWrite(ledPins[2],LOW);
  digitalWrite(ledPins[0],LOW);
  digitalWrite(ledPins[3],LOW); 
  delay(500);
}






