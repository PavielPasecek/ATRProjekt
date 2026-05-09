/*
  PavelSolidniPrevodTextuNaHvezdicky.h - Knihovna pro převod textu na hvězdičky pro finální projekt z ATRek.
  Vytvořil Pavel Paseka 9. května 2026.
*/
#include "Arduino.h"
#include "PavelSolidniPrevodTextuNaHvezdicky.h"

PavelSolidniPrevodTextuNaHvezdicky::PavelSolidniPrevodTextuNaHvezdicky()
{
  // pro jistotu nechavam konstruktor, protoze nevim jak by se to chovalo bez nej
}

String PavelSolidniPrevodTextuNaHvezdicky::preved(byte delka)
{
  String hvezdicky = "";
  for (byte i = 0; i < delka; i++)
  {
    hvezdicky = hvezdicky + "*";
  }
  return hvezdicky;
}