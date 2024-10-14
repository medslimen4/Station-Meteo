#include "../lib/Domain/Entity/RainfallData.hpp"
#include "../lib/Domain/Entity/TemperatureHumidityData.hpp"
#include "../lib/Domain/Entity/WindData.hpp"
#include <string>   
#include <ctime>
struct  WeatherStationData
{
    TemperatureHumidityData temperatureHumidityData; // Données du capteur de température et d'humidité
    RainfallData rainfallData;                       // Données du capteur de précipitations
    WindData windData;                               // Données du capteur de vent
    std::time_t timestamp;  
};