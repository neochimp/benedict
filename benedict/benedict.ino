#include <ESP32Servo.h>
Servo servo1;
int pos = 0;
int servo1Pin = 18;

void setup() {
  ESP32PWM::allocateTimer(0);
  ESP32PWM::allocateTimer(1);
  ESP32PWM::allocateTimer(2);
  ESP32PWM::allocateTimer(3);

  servo1.setPeriodHertz(50);
  servo1.attach(servo1Pin, 500, 2400);
  servo1.write(0);
}

void loop() {
  delay(200);
  //servo1.write(180);
  
  for (pos = 0; pos <= 180; pos++) {
    servo1.write(pos);
  }

}
