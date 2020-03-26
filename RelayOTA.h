#ifndef RELAYOTA_H
#define RELAYOTA_H

#include <Arduino.h>

using namespace std;

class RelayOTA {
    public:
        void begin ();
        void otaSetup ();
        void handle ();
};

#endif
