# Arduino VibrationMotor Library v0.1.0

![Arduino Logo](./ArduinoCommunityLogo.png)

## Overview

The Arduino VibrationMotor library provides a simple and modular way to manage a vibration motor connected to an Arduino board. The library includes functions for running both simple and complex vibration patterns, making it easy to integrate vibration feedback into your Arduino projects.

## Installation

1. **Download the Library:**
   - Click on the "Code" button in the GitHub repository.
   - Select "Download ZIP" to download the library as a ZIP file.

2. **Extract the ZIP File:**
   - Extract the contents of the ZIP file to your Arduino libraries directory.

3. **Restart the Arduino IDE:**
   - Restart the Arduino IDE to ensure that the library is recognized.

## Usage

1. **Include the Library:**
   ```cpp
   #include <VibrationMotor.h>
   ```

2. **Instantiate the VibrationMotor object:**
   ```cpp
   const int motorPin = 5;
   // Specify the pin to which the vibration motor is connected
   VibrationMotor myVibrationMotor(motorPin); 
   ```

## Features

- Constructor
   ```cpp
      // Initialize the VibrationMotor with the specified Arduino pin.
      VibrationMotor(uint8_t motorPin);
   ```

- Turn the Motor On
   ```cpp
      void on();
      Turn the vibration motor on.
   ```

- Turn the Motor On with Intensity
   ```cpp
      void on(uint8_t intensity);
   ```

- Turn the Motor Off
   ```cpp
      void off();
   ```

- Pulse (Short On-Off)
   ```cpp
      void pulse();
   ```

- Pulse with Repetitions
   ```cpp
      void pulse(int repetitions);
   ```

- Pulse for a Specified Time (Custom On-Off)
   ```cpp
      void pulseFor(int time);
   ```

- Fade In Effect
   ```cpp
      void fadeIn();
   ```

- Fade Out Effect
   ```cpp
      void fadeOut();
   ```