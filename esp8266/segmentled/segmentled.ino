
void setup() {
  Serial.begin(115200);
  Serial.println("setup");

  // PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_DATA2_U, FUNC_GPIO9);
  // PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_DATA3_U, FUNC_GPIO10);

  // pinMode(16, OUTPUT);
  // pinMode(9, OUTPUT);
  // pinMode(4, OUTPUT);
  // pinMode(0, OUTPUT);
  // pinMode(2, OUTPUT);
  // pinMode(9, OUTPUT);
  // pinMode(10, OUTPUT);

  // pinMode(14, OUTPUT);
  // pinMode(12, OUTPUT);
  // pinMode(13, OUTPUT);
  // pinMode(15, OUTPUT);
  // pinMode(3, OUTPUT);
  // pinMode(1, OUTPUT);

  // pinMode(9, OUTPUT);
}

void loop() {
  Serial.println("test");

  // digitalWrite(10, LOW);
  // digitalWrite(9, LOW);

  delay(1000);

  // digitalWrite(9, HIGH);
  delay(1000);
  // digitalWrite(9, LOW);
  // delay(1000);

  // digitalWrite(10, LOW);

  // digitalWrite(16, LOW);    //1   D0
  // digitalWrite(5, HIGH);    //a   D1
  // digitalWrite(4, HIGH);    //f   D2
  // digitalWrite(0, HIGH);    //2   D3
  // digitalWrite(2, HIGH);    //3   S4
  // // digitalWrite(9, HIGH);   //b   SC

  // digitalWrite(14, HIGH);   //e   D5
  // digitalWrite(12, HIGH);   //d   D6
  // digitalWrite(13, HIGH);   //h   D7
  // digitalWrite(15, HIGH);   //c   D8
  // digitalWrite(3, HIGH);    //g   D9
  // digitalWrite(1, HIGH);    //4   D10

  // delayMicroseconds(1000);
  // digitalWrite(16, LOW);    //1   D0
  // digitalWrite(0, HIGH);    //2   D3
  // digitalWrite(2, HIGH);    //3   S4
  // digitalWrite(1, HIGH);    //4   D10

  // delayMicroseconds(1000);
  // digitalWrite(16, HIGH);   //1   D0
  // digitalWrite(0, LOW);     //2   D3
  // digitalWrite(2, HIGH);    //3   S4
  // digitalWrite(1, HIGH);    //4   D10

  // delayMicroseconds(1000);
  // digitalWrite(16, HIGH);   //1   D0
  // digitalWrite(0, HIGH);    //2   D3
  // digitalWrite(2, LOW);     //3   S4
  // digitalWrite(1, HIGH);    //4   D10
  // digitalWrite(5, LOW);    //a   D1
  // digitalWrite(4, LOW);    //f   D2
  // // digitalWrite(9, LOW);

  // delayMicroseconds(1000);
  // digitalWrite(16, HIGH);   //1   D0
  // digitalWrite(0, HIGH);    //2   D3
  // digitalWrite(2, HIGH);    //3   S4
  // digitalWrite(1, LOW);     //4   D10
  // digitalWrite(5, LOW);    //a   D1
  // digitalWrite(4, LOW);    //f   D2
  // // digitalWrite(9, LOW);

  // delayMicroseconds(1000);
  // 

  // int state = digitalRead(9);
  // Serial.println(state);
  // Serial.println("loop");
  // int sensorValue = analogRead(A0);
  // Serial.print("sendor = ");
  // Serial.println(sensorValue);
}
