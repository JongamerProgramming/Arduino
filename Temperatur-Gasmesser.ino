//Temperatur-Gasmesser.py
//Created by PK, JongamerProgramming
//To run you need: Speaker, Adafruit_Sensor

#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 2
#define DHTTYPE    DHT22     // DHT 22 (AM2302)

DHT_Unified dht(DHTPIN, DHTTYPE);

uint32_t delayMS;

void setup() {
  Serial.begin(9600);
  //Initialisierung
  dht.begin();
  Serial.println(F("Test Test"));

  //Temperatur Details
  sensor_t sensor;
  dht.temperature().getSensor(&sensor);
  Serial.println(F("------------------------------------"));
  Serial.println(F("Temperature Sensor"));
  Serial.print  (F("Sensor Type: ")); Serial.println(sensor.name);
  Serial.print  (F("Driver Ver:  ")); Serial.println(sensor.version);
  Serial.print  (F("Unique ID:   ")); Serial.println(sensor.sensor_id);
  Serial.print  (F("Max Value:   ")); Serial.print(sensor.max_value); Serial.println(F("°C"));
  Serial.print  (F("Min Value:   ")); Serial.print(sensor.min_value); Serial.println(F("°C"));
  Serial.print  (F("Resolution:  ")); Serial.print(sensor.resolution); Serial.println(F("°C"));
  Serial.println(F("------------------------------------"));

  //Sauerstoff Details
  dht.humidity().getSensor(&sensor);
  Serial.println(F("Sauerstoff Sensor"));
  Serial.print  (F("Sensor Typ: ")); Serial.println(sensor.name);
  Serial.print  (F("Driver Version:  ")); Serial.println(sensor.version);
  Serial.print  (F("Unique ID:   ")); Serial.println(sensor.sensor_id);
  Serial.print  (F("Max Value:   ")); Serial.print(sensor.max_value); Serial.println(F("%"));
  Serial.print  (F("Min Value:   ")); Serial.print(sensor.min_value); Serial.println(F("%"));
  Serial.print  (F("Ergebnis:  ")); Serial.print(sensor.resolution); Serial.println(F("%"));
  Serial.println(F("------------------------------------"));
  delayMS = sensor.min_delay / 1000;
}

void loop() {
  delay(delayMS);
  sensors_event_t event;
  
  // Temperatur Event!
  dht.temperature().getEvent(&event);       
  noTone(3);
  if (isnan(event.temperature)) {
    Serial.println(F("Temperatur konnte nicht gelesen werden!"));
  }
  else {
    Serial.print(F("Temperature: "));
    Serial.print(event.temperature);
    Serial.println(F("°C"));
    if (event.temperature > 30.0) {
      Serial.println("Hitzefrei! :) "); 
      for (1..5){
        tone(3, 420);
        delay(50);
        tone(3, 570);
        delay(50);
      }      
    }

  }
  // Sauerstoff Event!
  dht.humidity().getEvent(&event);
  if (isnan(event.relative_humidity)) {
    Serial.println(F("Es gab einen Fehler bei der Berechnung! Exception geworfen!"));
  }
  else {
    Serial.print(F("Sauerstoff: "));
    Serial.print(event.relative_humidity);
    Serial.println(F("%"));
    if (event.relative_humidity > 50.0) {
      Serial.println("Es droht der Sauerstoffmangel!");
      tone(3, 420);
      delay(1000);
      tone(3, 570);
      delay(1000);
      noTone(3);
    }
  }
}
