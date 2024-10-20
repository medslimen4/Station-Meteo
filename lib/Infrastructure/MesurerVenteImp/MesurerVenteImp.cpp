#include "..\lib\Infrastructure\MesurerVenteImp\MesurerVenteImp.hpp"
#include <iostream>

void MesurerVenteImp::InitSensorVente() {
    // Initialize the wind sensor (pseudo-code)
    std::cout << "Initializing Wind Sensor..." << std::endl;
    // Your sensor initialization logic goes here
}

WindData MesurerVenteImp::measureWind() {
    // Measure and return wind data (pseudo-code)
    WindData data;
    data.sensorModel = "Anemometer";
    data.windSpeedMetersPerSecond = 5.0; // Example value in m/s
    data.windDirectionCompass = 90.0; // Example value in degrees
    data.timestamp = std::time(nullptr);
    return data;
}
