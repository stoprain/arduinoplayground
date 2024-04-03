#include <FastLED.h>
#define LED_PIN     5
#define NUM_LEDS    12
#define BRIGHTNESS  64
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

#define UPDATES_PER_SECOND 100

int ne555 = 7;
unsigned long duration1;

void setup() {
  delay( 3000 ); // power-up safety delay

  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  FastLED.setBrightness(  BRIGHTNESS );

  pinMode(ne555, INPUT);
  Serial.begin(9600);
}

void loop() {
  // duration1 = pulseIn(ne555, HIGH);  //Reads a pulse on ne555
  // Serial.println(duration1);  //print the length of the pulse on the serial
  // delay(500);

  int val = pulseIn(ne555, HIGH);
  int numLedsToLight = map(val, 0, 1000, 0, NUM_LEDS);
  Serial.println(val);

  // First, clear the existing led values
  FastLED.clear();
  CRGB randomcolor = CRGB(random(256), random(256), random(256));
  for(int led = 0; led < numLedsToLight; led++) { 
      leds[led] = randomcolor; 
  }
  FastLED.show();
  delay(30);
}
