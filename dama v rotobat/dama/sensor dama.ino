#define sensorPin A1

void setup() {

  Serial.begin(9600);
}

void loop() {

  int reading = analogRead(sensorPin);


  float voltage = reading * (5.0 / 1024.0);


  float temperatureC = voltage * 100;


  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print("\xC2\xB0");
  Serial.print("C  |  ");

  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print(temperatureF);
  Serial.print("\xC2\xB0");
  Serial.println("F");

  delay(1000);
}
