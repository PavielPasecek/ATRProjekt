/*
  PavelSonicSenzor.h - Knihovna pro vrácení hodnoty z ultra Sonic senzoru pro finální projekt z ATRek.
  Vytvořil Pavel Paseka 9. května 2026.
*/

#include "Arduino.h"
#include "PavelSonicSenzor.h"

PavelSonicSenzor::PavelSonicSenzor(byte pinTrig, byte pinEcho)
{
    _pinTrig = pinTrig;
    _pinEcho = pinEcho;
}

void PavelSonicSenzor::begin()
{
  pinMode(_pinTrig, OUTPUT);
  pinMode(_pinEcho, INPUT);
}

float PavelSonicSenzor::precti()
{
    digitalWrite(_pinTrig, LOW);
    delayMicroseconds(2);
    digitalWrite(_pinTrig, HIGH);
    delayMicroseconds(10);
    digitalWrite(_pinTrig, LOW);
    int cas = pulseIn(_pinEcho, HIGH); // zmeri za jak dlouho
    return cas * 0.034 / 2; // prevede cas na centaky
}