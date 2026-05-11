#include <stdafx.h>
#include <LightController.h>
#include <StateMachine.h>

LightController::LightController(Adafruit_NeoPixel &strip): strip(strip), currentState(OFF), currentAnimation(nullptr) {}

void LightController::begin()
{
  currentState = BOOT;
  //currentAnimation = nullptr;
}

void LightController::setState(State_t newState)
{
}

void LightController::update()
{
}

void LightController::changeAnimation(State_t newState)
{
}
