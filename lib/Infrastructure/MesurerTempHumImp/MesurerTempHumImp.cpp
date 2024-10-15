#include "MesurerTempHumImp.hpp"
#include <iostream>

void MesurerTempHumImp::InitSensorTempHum() {
    // Initialize the temperature and humidity sensor (pseudo-code)
    std::cout << "Initializing Temperature and Humidity Sensor..." << std::endl;
    // Your sensor initialization logic goes here
}

TemperatureHumidityData MesurerTempHumImp::measureTemperatureHumidity() {
    // Measure and return temperature and humidity data (pseudo-code)
    TemperatureHumidityData data;
    data.sensorModel = "TempHum Sensor";
    data.temperatureCelsius = 22.0; // Example value
    data.humidityPercentage = 55.0; // Example value
    data.timestamp = std::time(nullptr);
    return data;
}
