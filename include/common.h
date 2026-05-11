#ifndef __COMMON_H__
#define __COMMON_H__
#include <stdafx.h>




enum State {
  BEGIN,
  RAINBOW_CYCLE,
  RAINBOW_FROM_CENTER,
  COLOR_WIPE,
  KNIGHT_RIDER,
  SOLID_COLOR,
  OFF,
  TOTAL_STATES
};


class Animation {
public:
    virtual void update(Adafruit_NeoPixel &strip) = 0;
    virtual void reset() {}
    virtual ~Animation() {}
};




#endif // !__COMMON_H__
