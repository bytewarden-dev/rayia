#include <stdafx.h>
#include <StateMachine.h>

StateMachine state;


void setup()
{
  init_serial();
	Serial.println(OXY_COMPILER);


	init_strip();


	state.begin();
}


void loop()
{
	state.handle();
}
