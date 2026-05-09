/*
  PavelSonicSenzor.h - Knihovna pro vrácení hodnoty z ultra Sonic senzoru pro finální projekt z ATRek.
  Vytvořil Pavel Paseka 9. května 2026.
*/
#ifndef PavelSonicSenzor_h
#define PavelSonicSenzor_h

#include "Arduino.h"

class PavelSonicSenzor
{
  public:
    PavelSonicSenzor(byte pinTrig, byte pinEcho);
    void begin();
    float precti();
  private:
    byte _pinTrig;
    byte _pinEcho;
};

#endif