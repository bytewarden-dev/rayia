#ifndef __STDAFX_H__
#define __STDAFX_H__

// Definitions should be global.
#include <definitions.h>

// System headers required in headers should be included here.
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_NeoPixel.h>

// GPIO Config should be global.
#include <config.h>
#include <common.h>
//#include <utils.h>

extern Adafruit_NeoPixel strip;

#endif // !__STDAFX_H__
