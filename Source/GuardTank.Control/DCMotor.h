// KeyboardButton.h

#ifndef _KEYBOARDBUTTON_h
#define _KEYBOARDBUTTON_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

class DCMotor {
  public:
    DCMotor();
    DCMotor(int controlPin1, int controlPin2);
    void Controll(String value);
  private:
    int controlPin1;
    int controlPin2;
};

#endif
