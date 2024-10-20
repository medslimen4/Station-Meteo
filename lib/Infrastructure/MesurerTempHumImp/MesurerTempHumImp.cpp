#include "..\lib\Infrastructure\MesurerTempHumImp\MesurerTempHumImp.hpp"
#include "../include/bsp.h"
#include <iostream>
#include <DHT.h>
#include <chrono>
#include <ctime>


//def de capteur 
DHT dht(dhtPin,dhttype);

void MesurerTempHumImp::InitSensorTempHum() {
    
    std::cout << "Initializing Temperature and Humidity Sensor..." << std::endl;
    dht.begin();
}

TemperatureHumidityData MesurerTempHumImp::measureTemperatureHumidity() {
    // Measure and return temperature and humidity data (pseudo-code)
    TemperatureHumidityData data;

    data.sensorModel = "DHT22 Sensor";
    data.temperatureCelsius = float(dht.readTemperature()) ;
    data.humidityPercentage = float(dht.readHumidity()) ;
    auto now = std::chrono::system_clock::now();
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    data.timestamp =currentTime;
    return data;
}
