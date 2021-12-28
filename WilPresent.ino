#include "Definitions.h"
#include "Functions.h"

void setup() {
  // Configure touch button pin as input 
  pinMode(TOUCH_BUTTON_PIN, INPUT);

  // Configure LED pin as output
  pinMode(LED_PIN, OUTPUT);

  // setup the serial connection so we can get print
  // out information
  Serial.begin(9600);

  // Setup the LEDs
  pixels.begin();
  pixels.setBrightness(brightness);
  pixels.clear();
}

void loop() {
  ///////////////////////////////////////////////
  // Handle the Capacitive Touch button
  DoButtonAction(TOUCH_BUTTON_PIN);
  ///////////////////////////////////////////////

  ///////////////////////////////////////////////
  // LED Control
  NeoFadeIn(100,GREEN,brightness);
  NeoBlink(NUMPIXELS, LED_DELAY_S * MS_TO_S, GREEN, BLUE);  
  NeoFade(100,BLUE,brightness);
  ///////////////////////////////////////////////

  delay(100);
}
