#include <Wire.h>

#include "DCMotor.h"

DCMotor dcMotorA = DCMotor(5, 6);
DCMotor dcMotorB = DCMotor(9, 10);

void setup()
{
    Serial.begin(9600);
    Wire.begin(3);
    Wire.onReceive(receiveEvent);
}

void loop()
{
    while (Serial.available())
        integrate(Serial.read());
}

void receiveEvent(int numBytes)
{
    while (Wire.available())
        integrate(Wire.read());
}

String inputText = "";
void integrate(char word)
{
    if (word != '\n')
        inputText += word;

    if (word == '\n')
    {
        char actionCode = inputText.charAt(0);
        String inputValue = inputText.substring(1, inputText.length());
        switch (actionCode)
        {
        case 'A':
            dcMotorA.Controll(inputValue);
            break;
        case 'B':
            dcMotorB.Controll(inputValue);
            break;
        default:
            Serial.println(inputValue);
            break;
        }

        inputText = "";
    }
}