#include <Servo.h> 

Servo servo; // servo object representing the MG 996R servo
int pos = 0;

void setup() {
  servo.attach(9,500,2500); // servo is wired to Arduino on digital pin 3
}

void loop() {
  servo.write(0); // move MG996R's shaft to angle 0°
  delay(1000); // wait for one second
  servo.write(45); // move MG996R's shaft to angle 45°
  delay(1000); // wait for one second 
  servo.write(90); // move MG996R's shaft to angle 90°
  delay(1000); // wait for one second
  servo.write(135); // move MG996R's shaft to angle 135°
  delay(1000); // wait for one second
  servo.write(180); // move MG996R's shaft to angle 180°
  delay(1000); // wait for one second

  // for (pos = 0; pos <= 180; pos ++) {
  //   servo.write(pos);
  //   delay(50);
  // }

  // for (pos = 180; pos <= 0; pos --) {
  //   servo.write(pos);
  //   delay(50);
  // }

}