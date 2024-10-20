#include<Stream.h>
#define         relayControlPin       14               // relayControlPin pin
#define         dhtPin                  12
#define         dhttype              DHT22
bool            isRelayOn=            false;
const long      relayOnDuration=      217000;
unsigned long   relayStartTime;
const char      *ssid=                "Ooredoo 4G_MASJID";        // WiFi credentials
const char      *password=            "21451898";
const char      *serverUrl=           "http://ethical-deedee-masjid-4e9a147c.koyeb.app/api/v1/masjid-oqba-bn-nafii-lqadim-lqtar-2181-tunisia/prayer-times"; //  IP address of the server and the port where your API is running



