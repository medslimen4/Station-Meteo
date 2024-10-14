
#include "../lib/Domain/Services/Icommunication.hpp"
#include "../lib/Domain/Entity/WeatherStationData.hpp"

class GererCommunication
{
private:
    Icommunication* communication; // Pointer to communication interface

public:
    GererCommunication(Icommunication* comm) : communication(comm) {}

    void initializeCommunication()
    {
        communication->initialize(); // Initialize the communication module
    }

    void sendWeatherData(const WeatherStationData& data)
    {
        communication->sendData(data); // Send weather data via communication
    }

    bool checkConnection()
    {
        return communication->isConnected(); // Check connection status
    }
};

