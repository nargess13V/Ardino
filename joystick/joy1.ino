const int SW = 2; // SW
const int X = 0; // VRx
const int Y = 1; // VRy
void setup() {
  pinMode(SW, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop() {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW));
  Serial.print("\t\t");
  Serial.print("VRx: ");
  Serial.print(analogRead(X));
  Serial.print("\t\t");
  Serial.print("VRy: ");
  Serial.println(analogRead(Y));
  Serial.println("____________________________________________________________");
  delay(500);
}