//
//
//

#include "DCMotor.h"

DCMotor::DCMotor()
{
}

DCMotor::DCMotor(int controlPin1, int controlPin2)
{
  this->controlPin1 = controlPin1;
  this->controlPin2 = controlPin2;

  pinMode(controlPin1, OUTPUT);
  pinMode(controlPin2, OUTPUT);
}

void DCMotor::Controll(String value)
{


  // analogWrite(controlPin1, value);
  // analogWrite(controlPin2, value);
}
