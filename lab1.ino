//#include <Arduino.h>
#include <DHT.h>
#include <DHT_U.h>

//#include <DHT.h>
DHT dht(5, DHT11);

void setup() {
  // put your setup code here, to run once:
  dht.begin();
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("\nВлажность: ");
  Serial.print(h);
  Serial.print("\nТемпература: ");
  Serial.print(t);
}
