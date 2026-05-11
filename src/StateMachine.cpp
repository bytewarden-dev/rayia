#include <StateMachine.h>
#include <utils.h>

// Konstruktor
StateMachine::StateMachine() : currentState(State_t::OFF) {}

// Inicjalizacja
void StateMachine::begin() {
  setState(State_t::RAINBOW);
}

void StateMachine::handle()
{
  update();

  // Obsługa aktualnego stanu
  switch (currentState) {
    case State_t::AURORA:
      handleAurora();
      break;
    case State_t::BOOT:
      handleBoot();
      break;
    case State_t::STATIC:
      handleStatic();
      break;
    case State_t::OFF:
      handleOff();
      break;
    case State_t::RAINBOW:
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
  if (currentState == State_t::OFF) {
    setState(State_t::STATIC);
  } else if (currentState == State_t::STATIC) {
    setState(State_t::RAINBOW);
  } else if(currentState == State_t::RAINBOW) {
    setState(State_t::AURORA);
  } else if (currentState == State_t::AURORA) {
    setState(State_t::OFF);
  } else {
    setState(State_t::STATIC); // Domyślnie przejdź do stanu STATIC
  }
}

// Zmiana stanu
void StateMachine::setState(State_t state) {
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


void StateMachine::handleBoot() {
  
}