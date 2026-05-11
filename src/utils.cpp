#include <utils.h>


void bootstrap() {
 
}

// Efekt tęczy rozchodzącej się od środka
void rainbowFromCenter(uint8_t wait) {
  int center = NUM_LEDS / 2; // Środek paska LED
  for (long firstPixelHue = 0; firstPixelHue < 65536; firstPixelHue += 256) {
    for (int i = 0; i < center; i++) {
      // Oblicz indeksy diod po lewej i prawej stronie środka
      int left = center - i - 1;
      int right = center + i;

      // Oblicz odcień dla bieżącej odległości od środka
      int pixelHue = firstPixelHue + (i * 65536L / center);

      // Ustaw kolor dla lewej i prawej strony
      if (left >= 0) strip.setPixelColor(left, strip.gamma32(strip.ColorHSV(pixelHue)));
      if (right < NUM_LEDS) strip.setPixelColor(right, strip.gamma32(strip.ColorHSV(pixelHue)));
    }
    strip.show(); // Wyślij dane do WS2812
    delay(wait);
  }
}


// Just to know which program is running on my Arduino
/**
void init_serial() {
		Wire.begin();
    Serial.begin(9600);
    delay(100);
	  Serial.println(F("UART_Init(); Serial begin with baudrate: 9600\n\n"));
    
    Serial.println(F("START " __FILE__ " from " __DATE__ "\r\nUsing firmware version: " __FIRMWARE_VERSION__));
    

    Serial.println(F("[AVR] DriverLED [Version " __FIRMWARE_VERSION__ "]"));
    Serial.println(F("Compiled with " OXY_COMPILER ", " __STDCPP_V__ ". Date " __DATE__ __TIME__ "\n\n"));
}
*/