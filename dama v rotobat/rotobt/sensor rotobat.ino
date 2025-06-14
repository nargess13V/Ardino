#include "DHT.h"
#define DHTPIN 8
#define DHTTYPE DHT11
DHT dht (DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  float t = dht.readTemperature();
  float h = dht.readTemperature();


  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" ");
  Serial.print((char)176);
  Serial.print(" C | ");
  Serial.print((t * 9.0) / 5.0 + 32.0);
  Serial.print(" ");
  Serial.print((char)176);
  Serial.println("F ");
  Serial.print("Humidity = ");
  Serial.print(h);
  Serial.println(" % ");
  Serial.println("");

  delay(2000);
}
