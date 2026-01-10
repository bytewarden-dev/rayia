#include <stdafx.h>

// Flaga zmiany stanu
volatile bool stateChanged = false;


// Inicjalizacja paska LED
Adafruit_NeoPixel strip(NUM_LEDS, DO_PIN, NEO_GRB + NEO_KHZ800);


// Funkcja odczytująca wartość potencjometru i przeliczająca na jasność (0-255)
uint8_t readBrightness() {
  int potValue = analogRead(POT_PIN);
  return map(potValue, 0, 1023, 0, 255);
}


// Funkcja ISR do obsługi przycisku
void ISRbutton() {
  stateChanged = true;
}
