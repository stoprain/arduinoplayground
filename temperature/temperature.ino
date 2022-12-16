#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <Wire.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C u8g2(U8G2_R0);

void setup(void) {
  u8g2.begin();
  Serial.begin(9600);
  sensors.begin();
}

void loop(void) {
  sensors.requestTemperatures();
  // Serial.print(sensors.getTempCByIndex(0));
  // delay(500);


  // char buf[60];
  char t[5];
  dtostrf(sensors.getTempCByIndex(0), 2, 2, t);
  // strcat(buf, t);

  u8g2.clearBuffer();                     // clear the internal memory
  u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
  u8g2.drawStr(8, 29, t);         // write something to the internal memory
  u8g2.sendBuffer();                      // transfer internal memory to the display
  delay(3000);

  // u8g2.clearBuffer();                     // clear the internal memory
  // u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
  // u8g2.drawStr(31, 24, "your");           // write something to the internal memory
  // u8g2.sendBuffer();                      // transfer internal memory to the display
  // delay(800);

  // u8g2.clearBuffer();                     // clear the internal memory
  // u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
  // u8g2.drawStr(10, 29, "robotic");        // write something to the internal memory
  // u8g2.sendBuffer();                      // transfer internal memory to the display
  // delay(800);

  // u8g2.clearBuffer();                     // clear the internal memory
  // u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
  // u8g2.drawStr(4, 29, "solution");        // write something to the internal memory
  // u8g2.sendBuffer();                      // transfer internal memory to the display
  // delay(2000);
}
