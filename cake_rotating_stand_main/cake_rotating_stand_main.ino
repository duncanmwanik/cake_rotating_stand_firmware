#include <Arduino.h>

#define INA 34
#define INB 9
#define PWM 23
#define POT 15
#define CS 32

// Setting PWM properties
const int freq = 5000; // 5 kHz
const int pwmChannel = 0;
const int resolution = 8;
int dutyCycle = 125; // half speed

float voltage;
float current;

void setup()
{
    // Serial.begin(115200);
    pinMode(INA, OUTPUT);
    pinMode(INB, OUTPUT);
    pinMode(PWM, OUTPUT);
    pinMode(POT, INPUT);
    pinMode(CS, INPUT);

    // configure LED PWM functionalitites
    ledcSetup(pwmChannel, freq, resolution);

    // attach the channel to the GPIO to be controlled
    ledcAttachPin(PWM, pwmChannel);
}

void loop()
{
    // map pot values to pwm range
    dutyCycle = map(analogRead(POT), 0, 4095, 0, 255);
    // set speed
    ledcWrite(pwmChannel, dutyCycle);
    // start motor
    digitalWrite(INA, HIGH);
    digitalWrite(INB, LOW);
    
    // get current used by motor
    voltage = analogRead(CS) * (3.3 / 4096);
    current = voltage / 0.140; // 140mV per Amp
    Serial.print("Current : ");
    Serial.println(current);
    Serial.println("");
}