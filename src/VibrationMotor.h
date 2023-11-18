/*
  VibrationMotor.h - definition
  Copyright (c) 2023 Graziano Blasilli.
*/


#ifndef VibrationMotor_H
#define VibrationMotor_H

#include <Arduino.h>

class VibrationMotor {
  private:
    uint8_t motorPin;
  
  public:
    // Constructor
    VibrationMotor(uint8_t motorPin);

    // Turn the motor on.
    void on();

    // Turn the motor on with a specified intensity.
    void on(uint8_t intensity);

    // Turn the motor off.
    void off();

    // Turn the motor on for a specified <time> and then turn it off.
    void pulseFor(int time);

    // Turn the motor on for small time and then turn it off.
    void pulse();

    // Turn the motor on for small time and then turn it off, repeats several times.
    void pulse(int repetitions);

    // Vibrate with fade in effect.
    void fadeIn();

    // Vibrate with fade out effect.
    void fadeOut();
};

#endif