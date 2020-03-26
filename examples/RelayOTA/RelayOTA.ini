#include <RelayOTA.h>
#include <RelayWifiConfig.h>

#define WIFI true
#define OTA  true

RelayOTA ota;

void setup() {
    Serial.begin(9600);

    if (WIFI) {
        relayConfig(false);
    }
    if (OTA) {
        ota.begin();
    }        
}

void loop() {
    if (OTA) {
        ota.process();
    }
}
