/*
  PavelRGBLED.h - Knihovna pro primitivní práci s RGB LEDkou pro finální projekt z ATRek.
  Vytvořil Pavel Paseka 9. května 2026.
*/
#ifndef PavelRGBLED_h
#define PavelRGBLED_h

#include "Arduino.h"

class PavelRGBLED
{
  public:
    PavelRGBLED(byte pinR, byte pinG, byte pinB);
    void begin();
    void rozsvit(byte jakou);
  private:
    byte _pinR;
    byte _pinG;
    byte _pinB;
};

#endif