#include <Servo.h>

const int BUTTON_0_PIN = 2;
const int BUTTON_90_PIN = 3;
const int SERVO_PIN = 10;

Servo myServo;

void setup() {
  myServo.attach(SERVO_PIN);
  // The lab's original circuit uses external pull-down resistors.
  pinMode(BUTTON_0_PIN, INPUT);
  pinMode(BUTTON_90_PIN, INPUT);
}

void loop() {
  if (digitalRead(BUTTON_90_PIN) == HIGH) {
    myServo.write(90);
  }
  if (digitalRead(BUTTON_0_PIN) == HIGH) {
    myServo.write(0);
  }
}
