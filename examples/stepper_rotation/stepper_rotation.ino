
/*
 Stepper Motor Control - rotate with specific angle

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should rotate 200 degree then stops or rotate to any degree you provide

 
 Created 10 Feb. 2016
 by Mahmoud Ellawatty
 */

#include <Stepper.h>

const float STEP_Angle = 1.8;  // change this to fit the angle per step for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(STEP_Angle, 8, 9, 10, 11);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // rotate for 200 degree then stop
  myStepper.moveTo(200);
 
}

