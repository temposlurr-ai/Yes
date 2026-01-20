// Basic 2-Wheeled Robot Movement (2026)
#include <Arduino.h>

// Define Motor Pins
const int leftMotorForward = 5;
const int leftMotorBackward = 6;
const int rightMotorForward = 10;
const int rightMotorBackward = 11;

void setup() {
  pinMode(leftMotorForward, OUTPUT);
  pinMode(leftMotorBackward, OUTPUT);
  pinMode(rightMotorForward, OUTPUT);
  pinMode(rightMotorBackward, OUTPUT);
}

void moveForward() {
  digitalWrite(leftMotorForward, HIGH);
  digitalWrite(rightMotorForward, HIGH);
}

void stopRobot() {
  digitalWrite(leftMotorForward, LOW);
  digitalWrite(rightMotorForward, LOW);
}

void loop() {
  moveForward(); // Move for 2 seconds
  delay(2000);
  stopRobot();   // Stop for 1 second
  delay(1000);
}
