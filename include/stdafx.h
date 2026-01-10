#ifndef __STDAFX_H__
#define __STDAFX_H__

// Definitions should be global.
#include <definitions.h>

// System headers required in headers should be included here.
#include <Wire.h>
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

// GPIO Config should be global.
#include <pin_config.h>
#include <utils.h>

// Deklaracja globalnego obiektu Adafruit_NeoPixel
extern Adafruit_NeoPixel strip;

// Flaga do zmiany stanu w maszynie
extern volatile bool stateChanged;



// Funkcja do obslugi przerwania [ ISR ]
void ISRbutton();

// Funkcja do odczytu jasności z potencjometru
uint8_t readBrightness();



#endif // !__STDAFX_H__
