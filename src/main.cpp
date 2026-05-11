#include <stdafx.h>
#include <utils.h>
#include <StateMachine.h>
#include <LightController.h>

Adafruit_NeoPixel strip(NUM_LEDS, DO_PIN, NEO_GRB + NEO_KHZ800);
StateMachine stateMachine;


void setup()
{
  bootstrap();
}


void loop()
{
  stateMachine.handle();
}

