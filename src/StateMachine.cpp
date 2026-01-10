#include <StateMachine.h>
#include <utils.h>

// Konstruktor
StateMachine::StateMachine() : currentState(OFF) {}

// Inicjalizacja
void StateMachine::begin() {
  setState(RAINBOW);
}

void StateMachine::handle()
{
  update();

  // Obsługa aktualnego stanu
  switch (currentState) {
    case AURORA:
      handleAurora();
      break;
    case STATIC:
      handleStatic();
      break;
    case OFF:
      handleOff();
      break;
    case RAINBOW:
      handleRainbow();
      break;
  }
}

// Aktualizacja stanu
void StateMachine::update() {
  // Odczyt jasności z potencjometru i ustawienie jasności paska
  // TODO: JESTEM JEBANYM IDIOTA I ZROBILEM ZWARE.
  //       TYMCZASOWA WARTOSC ZLAPY
  //uint8_t brightness = readBrightness();

  // uint8_t brightness = 86;
  uint8_t brightness = 48;
  strip.setBrightness(brightness);

  // Sprawdzanie, czy nastąpiła zmiana stanu
  /**
   *  
   
  if (stateNext) {
    stateNext = false;    // Reset flagi
    nextState();          // Przejście do następnego stanu
  }
    */
}

// Zmiana stanu na kolejny
void StateMachine::nextState() {
  if (currentState == OFF) {
    setState(STATIC);
  } else if (currentState == STATIC) {
    setState(RAINBOW);
  } else if(currentState == RAINBOW) {
    setState(AURORA);
  } else if (currentState == AURORA) {
    setState(OFF);
  }
}

// Zmiana stanu
void StateMachine::setState(State state) {
  currentState = state;
}

// Obsługa stanu AURORA
void StateMachine::handleAurora() {
}

// Obsługa stanu STATIC
void StateMachine::handleStatic() {
  uint32_t staticColor = strip.Color(255, 0, 0); // Statyczny kolor (czerwony)
  for (uint16_t i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, staticColor);
  }
  strip.show();
  delay(10);
}

// Obsługa stanu OFF
void StateMachine::handleOff() {
  for (uint16_t i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, 0); // Wyłączenie diody
  }
  strip.show();
}


void StateMachine::handleRainbow() {
  rainbowFromCenter(17);
}
