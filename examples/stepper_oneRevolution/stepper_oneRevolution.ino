
/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe
 
 Modified 10 Feb. 2016
 by Mahmoud Ellawatty
 */

#include <Stepper.h>

const float STEP_Angle = 1.8;  // change this to fit the angle per step for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(STEP_Angle, 8, 9, 10, 11);

int steps;

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // get the number of steps for one revolution --- 360 degree---
  steps = myStepper.getSteps(360);
  
  // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(steps);
  delay(500);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-steps);
  delay(500);
}

