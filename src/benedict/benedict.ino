#include <ESP32Servo.h>
#define NUM_SERVOS 4

Servo servos[NUM_SERVOS];
const int servoPins[NUM_SERVOS] = {5, 18, 19, 21};
int pos = 0;


void setup() {
  ESP32PWM::allocateTimer(0);
  ESP32PWM::allocateTimer(1);
  ESP32PWM::allocateTimer(2);
  ESP32PWM::allocateTimer(3);

  for (int i = 0; i < NUM_SERVOS; i++) {
    servos[i].setPeriodHertz(50);
    servos[i].attach(servoPins[i], 500, 2400);
  }  servos[2].write(random(0, 180));

  servos[1].write(0);
  servos[0].write(0);  
  servos[2].write(0);
  servos[3].write(0);

}

void loop() {
  delay(200);
  //servo1.write(180);
  
  //for (pos = 0; pos <= 180; pos+=2) {
  //  servos[1].write(pos);
  //  servos[0].write(180-pos);
  //}
  servos[0].write(random(0, 180));
  servos[1].write(random(0, 180));
  servos[2].write(random(0, 180));
  servos[3].write(random(0, 180));
}
