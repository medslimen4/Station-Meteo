#include "../lib/Domain/Services/Icommunication.hpp"
class CommunicationImp : public Icommunication
{
public:
    void initialize() override;
    void sendData(const WeatherStationData &data) override;
    bool isConnected() override;

private:
};