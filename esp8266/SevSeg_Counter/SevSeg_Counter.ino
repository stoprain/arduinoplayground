/* SevSeg Counter Example
 
 Copyright 2020 Dean Reading
 
 This example demonstrates a very simple use of the SevSeg library with a 4
 digit display. It displays a counter that counts up, showing deci-seconds.
 */

#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment controller object

void setup() {
  byte numDigits = 4;
  byte digitPins[] = {16, 0, 2, 1};
  byte segmentPins[] = {5, 11, 15, 12, 14, 4, 3, 13};
  bool resistorsOnSegments = false; // 'false' means resistors are on digit pins
  byte hardwareConfig = COMMON_CATHODE; // See README.md for options
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins);
  // bool updateWithDelays = false; // Default 'false' is Recommended
  // bool leadingZeros = false; // Use 'true' if you'd like to keep the leading zeros
  // bool disableDecPoint = false; // Use 'true' if your decimal point doesn't exist or isn't connected
  
  // sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments,
  // updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(50);
}

void loop() {
  // static unsigned long timer = millis();
  // static int deciSeconds = 0;
  
  // if (millis() - timer >= 100) {
  //   timer += 100;
  //   deciSeconds++; // 100 milliSeconds is equal to 1 deciSecond
    
  //   if (deciSeconds == 10000) { // Reset to 0 after counting for 1000 seconds.
  //     deciSeconds=0;
  //   }
  //   sevseg.setNumber(deciSeconds, 1);
  // }

  sevseg.setNumber(100);
  sevseg.refreshDisplay(); // Must run repeatedly
}

/// END ///
