

inline void SetColor(Adafruit_NeoPixel p, int num, int color[3])
{
    for (int i = 0; i < num; i++)
    {
        p.setPixelColor(i, color[0], color[1], color[2]);
    }
    p.show();
}


// This function I got from the internet :)
// num is the number of pixels
// wait is the time you want to spend on each color
// color1 and color2 are which colors you want to switch between
void NeoBlink(int num, int wait, const int color1[3], const int color2[3])
{
    pixels.setBrightness(brightness);
    for (int i = 0; i < num; i++)
    {
        pixels.setPixelColor(i, color1[0], color1[1], color1[2]);
    }
    pixels.show();
    delay(wait);

    for (int j = 0; j < num; j++)
    {
        pixels.setPixelColor(j, color2[0], color2[1], color2[2]);
    }
    pixels.show();
    delay(wait);
}

void NeoFade(int FadeSpeed, const int color[3], int bStart)
{
    // setup the color first
    for (int i = 0; i < NUMPIXELS; i++) 
    { 
        pixels.setPixelColor(i, color[0], color[1], color[2]);
    } 
    // then fade it out given the delay
    for (int j = bStart; j > 0; j=j-FADE_STEP)
    {
        pixels.setBrightness(j);
        pixels.show();
        delay(FadeSpeed);
    }
}

void NeoFadeIn(int FadeSpeed, const int color[3], int bEnd)
{
    // setup the color first
    for (int i = 0; i < NUMPIXELS; i++) 
    { 
        pixels.setPixelColor(i, color[0], color[1], color[2]);
    } 
    // then fade it out given the delay
    // funny thing, you can't start brightness at 0... so J starts at 1
    for (int j = 1; j < bEnd; j=j+FADE_STEP)
    {
        // set the brightness
        pixels.setBrightness(j);
        // use show to execute your change
        pixels.show();
        // delay until the next change in brightness
        delay(FadeSpeed);
    }
}

void DoButtonAction( int pin )
{
  ///////////////////////////////////////////////
  // Logic for Capacitive Touch button
  // Read the state of the capacitive touch board
  buttonState = digitalRead( pin );

  // If a touch is detected, turn on the LED
  // You can also do other actions here, just 
  // replace the digitalWrite call or add another 
  // action
  // I like having it light up the onboard LED so 
  // I know its working.
  if (buttonState == HIGH) {
    digitalWrite(LED_PIN, HIGH);
    delay(BUTTON_HOLD_TIME * MS_TO_S);
  } else {
    digitalWrite(LED_PIN, LOW);
  }  
  ///////////////////////////////////////////////
}