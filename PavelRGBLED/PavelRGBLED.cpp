/*
  PavelRGBLED.h - Knihovna pro primitivní práci s RGB LEDkou pro finální projekt z ATRek.
  Vytvořil Pavel Paseka 9. května 2026.
*/

#include "Arduino.h"
#include "PavelRGBLED.h"

PavelRGBLED::PavelRGBLED(byte pinR, byte pinG, byte pinB)
{
    _pinR = pinR;
    _pinG = pinG;
    _pinB = pinB;
}

void PavelRGBLED::begin()
{
  pinMode(_pinR, OUTPUT);
  pinMode(_pinG, OUTPUT);
  pinMode(_pinB, OUTPUT);
}

void PavelRGBLED::rozsvit(byte jakou)
{
    if (jakou == 0)
        {
            digitalWrite(_pinR, ((millis() % 1000) >= 500) ? HIGH : LOW);//millis je převeden na číslo od 0 do 999 a pak zjistí, jestli je větší než 500, to znamená změna každou 0.5 vteřinu
            digitalWrite(_pinG, LOW);
            digitalWrite(_pinB, LOW);
        }
    else if (jakou == 1)
        {
            digitalWrite(_pinR, LOW);
            digitalWrite(_pinG, HIGH); // ZELENA BARVA
            digitalWrite(_pinB, LOW);
        }
    else
        {
            digitalWrite(_pinR, LOW);
            digitalWrite(_pinG, LOW); // MODRA BARVA
            digitalWrite(_pinB, HIGH);
        }
}