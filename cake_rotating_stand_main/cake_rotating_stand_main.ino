#include <Arduino.h>

#define INA 21
#define INB 22
#define PWM 23

void startMotor()
{
    // Assuming specified motor RPM is 6, we run motor at full speed
    // Start forward rotation
    digitalWrite(INA, HIGH);
    digitalWrite(INB, LOW);
}

void setup()
{
    // Serial.begin(115200);
    pinMode(INA, OUTPUT);
    pinMode(INB, OUTPUT);
}

void loop()
{
    startMotor();
}