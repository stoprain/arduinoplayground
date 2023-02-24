#include <Servo.h>

Servo servo;

int pos=0;

void setup() {
  servo.attach(3);
}

void loop() {
  // delay(2000);
  // servo.write(0);
  // delay(2000);
  // servo.write(90);
  // delay(2000);
  // servo.write(180);
  for (pos=0; pos<=180; pos+=1) {
    servo.write(pos);
    delay(15);
  }
  delay(2000);
  for (pos=180;pos>=0;pos-=1) {
    servo.write(pos);
    delay(15);
  }
}
