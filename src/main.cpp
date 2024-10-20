#include <DHT.h>
#include <Wire.h>
#include <Arduino.h>
#include "../lib/Domain/Entity/TemperatureHumidityData.hpp"
#include "../lib/Domain/Services/ImesurerTempHum.hpp"
#include "../lib/Infrastructure/MesurerTempHumImp/MesurerTempHumImp.hpp"
#include "../lib\Domain\Services\ImesurerVente.hpp" 

// Declare the sensor interface and service
MesurerTempHumImp tempHumSensor;
MesurerTemperatureHumidite tempHumService(&tempHumSensor);

void setup() {
  // Initialize serial communication for output
  Serial.begin(9600);

  // Initialize the temperature and humidity sensor
  tempHumService.InitSensor();

  // Give time for sensor initialization
  delay(2000); 
}

void loop() {
  // Retrieve temperature and humidity data
  TemperatureHumidityData data = tempHumService.getTemperatureHumidityData();

  // Display the data on the Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(data.temperatureCelsius);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(data.humidityPercentage);
  Serial.println(" %");

  Serial.print("Sensor Model: ");
  Serial.println(data.sensorModel);



  // Wait for 5 seconds before taking another measurement
  delay(5000);
}
