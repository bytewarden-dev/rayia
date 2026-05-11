#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include <stdafx.h>


enum State_t {
    BOOT,
    AURORA,
    STATIC,
    RAINBOW,
    OFF,
    TOTAL_STATES
};


class StateMachine {
public:
    StateMachine();
    void begin();
    void handle();
    void setState(State_t state);

private:
    State_t currentState;         // Aktualny stan
    void handleAurora();        // Obsługa stanu AURORA
    void handleBoot();          // Obsługa stanu BOOT
    void handleStatic();        // Obsługa stanu STATIC
    void handleRainbow();
    void handleOff();           // Obsługa stanu OFF
    void update();
    void nextState();
};


extern StateMachine stateMachine;

#endif