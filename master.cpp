#include <Servo.h> // Include the Servo library

Servo servo1; // Create servo object for Servo 1
Servo servo2; // Create servo object for Servo 2

void setup() {
  servo1.attach(9); // Attach Servo 1 to pin 9
  servo2.attach(10); // Attach Servo 2 to pin 10
}

void loop() {
  // Move Servo 1 from 0 to 90 degrees
  for (int pos = 0; pos <= 90; pos++) {
    servo1.write(pos);          // Set Servo 1 position
    servo2.write(pos + 45);      // Set Servo 2 position (offset by 45 degrees)
    delay(15);                   // Short delay to allow smooth movement
  }

  delay(1000); // Wait for 1 second

  // Move Servo 1 from 90 to 0 degrees
  for (int pos = 90; pos >= 0; pos--) {
    servo1.write(pos);           // Set Servo 1 position
    servo2.write(pos + 45);      // Set Servo 2 position (offset by 45 degrees)
    delay(15);                   // Short delay to allow smooth movement
  }

  delay(1000); // Wait for 1 second
}
