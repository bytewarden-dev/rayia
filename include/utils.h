#ifndef __UTILS_H__
#define __UTILS_H__

#include <stdafx.h>


void init_serial();

void init_strip();

void rainbowFromCenter(uint8_t wait);

void setAllLEDs(uint8_t red, uint8_t green, uint8_t blue);
#endif