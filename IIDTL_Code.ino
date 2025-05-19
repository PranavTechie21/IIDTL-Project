#include <Servo.h>

Servo myServo;

int ldrLeft = A0;   // Left LDR
int ldrRight = A1;  // Right LDR
int servoPin = 9;

int leftValue = 0;
int rightValue = 0;
int servoPos = 90;  // Start at middle

void setup() {
  myServo.attach(servoPin);
  Serial.begin(9600);
  myServo.write(servoPos);
}

void loop() {
  leftValue = analogRead(ldrLeft);
  rightValue = analogRead(ldrRight);

  int difference = leftValue - rightValue;

  if (abs(difference) > 100) { // sensitivity threshold
    if (difference > 0 && servoPos < 180) {
      servoPos++;
    } else if (difference < 0 && servoPos > 0) {
      servoPos--;
    }
    myServo.write(servoPos);
  }

  Serial.print("Left: ");
  Serial.print(leftValue);
  Serial.print(" | Right: ");
  Serial.print(rightValue);
  Serial.print(" | Servo: ");
  Serial.println(servoPos);

  delay(100);
}
