#ifndef __PIN_CONFIG_H__
#define __PIN_CONFIG_H__

#include <Arduino.h>

// Ustawienia przycisku
#define ISR_PIN 2       // Pin przycisku (musi obsługiwać przerwania na Arduino UNO/Nano)

// Ustawienia paska LED
#define DO_PIN 3        // Pin, do którego podłączono WS2812
#define NUM_LEDS 121    // Liczba diod LED w pasku

// Ustawienia potencjometru
#define POT_PIN A2      // Pin potencjometru



#endif
