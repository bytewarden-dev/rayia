#include <stdafx.h>
#include <StateMachine.h>

StateMachine state;


void setup()
{
  Wire.begin();
  Serial.begin(9600);
  while (!Serial);

  Serial.println("\nI2C Scanner");
	Serial.println(OXY_COMPILER);


	init_strip();


	state.begin();
}


void loop()
{
	state.handle();
}
