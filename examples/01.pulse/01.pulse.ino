#include <VibrationMotor.h>

/**
 * VibrationMotor pulse example.
*/

const int motorPin = 5;

// Specify the pin to which the vibration motor is connected
VibrationMotor myVibrationMotor(motorPin); 

void setup() {

}

void loop() {

  // Pulse the motor for 2 times
  myVibrationMotor.pulse(2);

  // Wait for 2 seconds
  delay(2000);

}