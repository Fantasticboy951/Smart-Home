#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN        16
#define NUMPIXELS 18

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 1000

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  pixels.begin();
}

void loop() {
  pixels.clear();

  delay(DELAYVAL);  

  for(int i=0; i<3; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();
  }

  delay(DELAYVAL);

  for(int i=3; i<6; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();
  }

  delay(DELAYVAL);

  for(int i=6; i<9; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();
  }

  delay(DELAYVAL);  

  for(int i=9; i<11; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();
  }

  delay(DELAYVAL); 

  for(int i=11; i<13; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();
  }

  delay(DELAYVAL);     

  for(int i=13; i<16; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();
  }

  delay(DELAYVAL);      
}