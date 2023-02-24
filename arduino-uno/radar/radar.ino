#include <Servo.h>

Servo myServo;
int pos = 0;
int trigPin = 2;
int echoPin = 5;
long duration, cm, inches;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // myServo.attach(3);
}

void loop() {
  // for (pos=0;pos<=180;pos+=1) {
  //   myServo.write(pos);
  //   delay(15);
  // }
  // for (pos=180;pos>=0;pos-=1) {
  //   myServo.write(pos);
  //   delay(15);
  // }
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2) / 29.1;
  inches = (duration/2) / 74;
  Serial.print(cm);
  Serial.println();
  delay(350); 
}
