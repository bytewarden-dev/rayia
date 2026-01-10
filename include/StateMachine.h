#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include <stdafx.h>


enum State {
    STATIC,
    AURORA,
    RAINBOW,
    OFF
};


class StateMachine {
public:
    StateMachine();
    void begin();
    void handle();
    void setState(State state);

private:
    State currentState;         // Aktualny stan
    void handleAurora();        // Obsługa stanu AURORA
    void handleStatic();        // Obsługa stanu STATIC
    void handleRainbow();
    void handleOff();           // Obsługa stanu OFF
    void update();
    void nextState();
};

#endif