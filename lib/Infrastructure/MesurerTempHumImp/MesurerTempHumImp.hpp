#include "../lib/Domain/Services/ImesurerTempHum.hpp"
class MesurerTempHumImp : public ImeasurerTempHum
{
public:
    void InitSensorTempHum() override;
    TemperatureHumidityData measureTemperatureHumidity() override;

private:
};