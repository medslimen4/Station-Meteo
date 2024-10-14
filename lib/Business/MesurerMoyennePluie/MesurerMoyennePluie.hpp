#include "../lib/Domain/Services/ImesurerPluie.hpp"

class MesurerPluie
{
private:
    ImeasurerPluie* pluieSensor; // Interface for rainfall sensor

public:
    MesurerPluie(ImeasurerPluie* sensor) : pluieSensor(sensor) {}

    void InitSensor()
    {
        pluieSensor->InitSensorPluie();
    }

    RainfallData getRainfallData()
    {
        return pluieSensor->measureRainfall();
    }
};
