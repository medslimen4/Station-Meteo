
#include <Arduino.h>
#include "../lib/Infrastructure/MesurerTempHumImp/MesurerTempHumImp.hpp"
#include "../lib/Business/MesurerTemperatureHumidite/MesurerTemperatureHumidite.hpp"
#include "../lib/Domain/Entity/TemperatureHumidityData.hpp"


//instance de l'infra
MesurerTempHumImp *MTHIMP ; 

//instance business 
MesurerTemperatureHumidite MTH(MTHIMP) ; 


void setup() {
  
  Serial.begin(115200);
  MTH.InitSensor();


}

void loop() {
  MTH.getTemperatureHumidityData() ; 
  TemperatureHumidityData data = MTH.getTemperatureHumidityData();

  Serial.print("Current time : ");
  Serial.print(data.timestamp) ; 
  Serial.print("Temerature ");
  Serial.print(data.temperatureCelsius) ; 
  Serial.print("Humidity : ");
  Serial.print(data.humidityPercentage) ; 

}

