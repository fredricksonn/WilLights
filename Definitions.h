// DEFINITIONS AND LIBRARY MANAGEMENT
// Here be your definitions. I like to keep my constants and variables here
// We will also be including some outside help here
// Make sure to install the following arduino libraries:
//      "Adafruit Neopixel"

#include <Adafruit_NeoPixel.h> // Required library for the LEDs
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif


///////////////////////////////////////////
// CONSTANTS
// These are generally things that don't change, or you don't
// anticipate changing, like pin definitions or time conversions
const int TOUCH_BUTTON_PIN = 2;     // Input pin for touch state
const int POT_PIN = A0;             // Potentiometer Input
const int LED_PIN = 13;             // Pin number for Onboard LED
const int ADDR_LED_PIN = 6;         // output pin for the LEDS

const int MS_TO_S = 1000;           // Milliseconds to Seconds ratio
const int BUTTON_HOLD_TIME = 5;     // Time for button to hold value
const int LED_DELAY_S  = 1;         // LED on time 

const int NUMPIXELS_PER_STRAND = 50;
const int NUM_STRANDS = 1;
const int NUMPIXELS = NUMPIXELS_PER_STRAND * NUM_STRANDS;
const int FADE_STEP = 2;

// Colors
// Note that these are in {GRB} not {RGB} like the 
// rest of the internet
const int RED[3]       = {   0, 255,   0 };
const int YELLOW[3]    = { 255, 255,   0 };
const int GREEN[3]     = { 255,   0,   0 };
const int AQUA[3]      = { 255,   0, 255 };
const int BLUE[3]      = {   0,   0, 255 };
const int PURPLE[3]    = {   0,  80,  80 };
const int WHITE[3]     = { 255, 255, 255 };
const int OFFWHITE[3]  = { 164, 242, 243 };

///////////////////////////////////////////

///////////////////////////////////////////
// VARIABLES
// This is where you want to "declare" things that you will use
// later, and generally you want to give them a default or starting
// value
int buttonState = 0;                // Variable for reading button
int potValue    = 0;                // Potentiometer Value
int brightness  = 25;               // Default brightness

Adafruit_NeoPixel pixels(NUMPIXELS, ADDR_LED_PIN, NEO_GRB + NEO_KHZ800);

///////////////////////////////////////////
