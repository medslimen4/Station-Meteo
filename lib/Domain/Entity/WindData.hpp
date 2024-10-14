#include <string>   
#include <ctime>
struct WindData {
    std::string sensorModel;    // Modèle du capteur, ex: "Anémomètre"
    float windSpeedMetersPerSecond;  // Vitesse du vent en m/s
    std::string windDirectionCompass;  // Direction du vent (ex: "NW", "SE")
    std::time_t timestamp;      // Date et heure de la dernière mesure
};