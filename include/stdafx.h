#ifndef __STDAFX_H__
#define __STDAFX_H__

// Definitions should be global.
#include <definitions.h>

// System headers required in headers should be included here.
#include <Wire.h>
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

// GPIO Config should be global.
#include <config.h>
#include <utils.h>

// Deklaracja globalnego obiektu Adafruit_NeoPixel
extern Adafruit_NeoPixel strip;



#endif // !__STDAFX_H__
