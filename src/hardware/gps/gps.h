#ifndef GPS_INCLUDED
#define GPS_INCLUDED


#include <Arduino.h>
#include <TinyGPSPlus.h>
#include <SoftwareSerial.h>

#include "../../settings/settings.h"

// ======================= GPS HEADER=====================

class GPS
{
    SoftwareSerial gpsPort;
    TinyGPSPlus gpsModule;
public:
    GPS(uint8_t pinRx, uint8_t pinTx, long speed, uint8_t ledPin);
    void setup();
    void updateLocation(DATA *loraDataPacket);


private:
    bool _debugMode;
    uint8_t _ledPin;
    void turnIndicatorOn();
    void turnIndicatorOff();    
    void printGPSInfo();

};

#endif