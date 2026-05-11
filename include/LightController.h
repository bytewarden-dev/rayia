#ifndef __LIGHTCONTROLLER_H__
#define __LIGHTCONTROLLER_H__

#include <stdafx.h>


class LightController {
public:
    LightController(Adafruit_NeoPixel &strip);
    void begin();
    void setState(State_t newState);
    void update();  

private:
    State_t currentState;
    Animation* currentAnimation;
    Adafruit_NeoPixel &strip;
  
    void changeAnimation(State_t newState);
};  



#endif // !__LIGHTCONTROLLER_H__