#include "../lib/Domain/Services/ImesurerVente.hpp"

class MesurerVente
{
private:
    ImeasurerVente* ventSensor; // Interface for wind sensor

public:
    MesurerVente(ImeasurerVente* sensor) : ventSensor(sensor) {}

    void InitSensor()
    {
        ventSensor->InitSensorVente();
    }

    WindData getWindData()
    {
        return ventSensor->measureWind();
    }
};
