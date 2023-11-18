/*
  VibrationMotor.h - implementation
  Copyright (c) 2023 Graziano Blasilli.
*/

#include "VibrationMotor.h"


VibrationMotor::VibrationMotor(uint8_t motorPin) {
  this->motorPin = motorPin;
  pinMode(this->motorPin, OUTPUT);
}

void VibrationMotor::on() {
  digitalWrite(this->motorPin, HIGH);
}

// Turn the motor on with a specified intensity.
void VibrationMotor::on(uint8_t intensity) {
  analogWrite(this->motorPin, intensity);
}

// Turn the motor off.
void VibrationMotor::off() {
  digitalWrite(this->motorPin, LOW);
}

// Turn the motor on for a specified <time> and then turn it off.
void VibrationMotor::pulseFor(int time) {
  this->on();
  delay(time);
  this->off();
}

// Turn the motor on for small time and then turn it off.
void VibrationMotor::pulse() {
  this->pulseFor(250);
}

// Turn the motor on for small time and then turn it off, repeats several times.
void VibrationMotor::pulse(int repetitions) {
  for (int i = 0; i < repetitions; i++) {
    this->pulse();
    delay(100);
  }
}

void VibrationMotor::fadeIn(){
  this->off();
  for (int i = 0; i <= 255; i += 10) {
    analogWrite(this->motorPin, i); // Vary the motor intensity
    delay(50); // Gradual increase in intensity
  }
}

void VibrationMotor::fadeOut(){
  this->off();
  for (int i = 255; i >= 0; i -= 10) {
    analogWrite(this->motorPin, i); // Vary the motor intensity
    delay(50); // Gradual decrease in intensity
  }
}