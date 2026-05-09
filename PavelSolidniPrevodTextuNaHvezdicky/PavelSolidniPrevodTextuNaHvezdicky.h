/*
  PavelSolidniPrevodTextuNaHvezdicky.h - Knihovna pro převod textu na hvězdičky pro finální projekt z ATRek.
  Vytvořil Pavel Paseka 9. května 2026.
*/
#ifndef PavelSolidniPrevodTextuNaHvezdicky_h
#define PavelSolidniPrevodTextuNaHvezdicky_h

#include "Arduino.h"

class PavelSolidniPrevodTextuNaHvezdicky
{
  public:
    PavelSolidniPrevodTextuNaHvezdicky();
    String preved(byte delka);
  private:
    byte nic;
};

#endif