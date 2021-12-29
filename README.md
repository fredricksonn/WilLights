# WilLights
Merry Christmas and Happy Early Birthday! I hope this present brings you as much joy as I found in making it.
## Overview
So this whole thing is kind of a starter kit. Right now it is setup for controlling LED light strips, and the code in this repository can be edited to do what you want. This is in a different language than what you know (mostly C/C++), but I think you will be able to figure it out.

## Setup
### Software
You will need some particular software to do this stuff. The only required one is the Arduino software, which can be found [here](https://www.arduino.cc/en/software).

I also recommend getting a better text editor, like [Visual Studio Code](https://code.visualstudio.com/download)
## Parts
| Part | Description |
|---|---|
| Arduino Micro | This is the brains of the operation |
| VETCO Addressable LEDs | Program each individual LED to a different color, and control brightness for each of them. |
| Touch Button | Capacitive touch button for... things? |
| Potentiometer | Knob, maybe for brightness? |
| Breadboard | Great for plugging things in |
| Power supply | 5Volt 3Amp should be plenty for now |
| Resistors | You might need these for future projects |
| Jumper Cables | You might need these for future projects |
### Pinout
I already have some stuff coded up for you, which mean that certain things need to be plugged into certain places

| Component | Pin |
|--|--|
| Touch Button | D2 |
| Onboard LED | D13 |
| LED String Data line | 6 |
| Potentiometer | A0 |

The power supply should be plugged into the +/- on the side of the breadboard. If you want your power and ground available on both sides of the breadboard, you will need to connect them using jumper cables. 
## Code
The code is everything else in this repository. There are three files right now, and you can move stuff around as you want to. I like to organize my code into three sections:
1. Definitions - Variables and constants that I will use everywhere else
2. Functions - Things that I might want to call multiple times, I put in functions and place in their own file.
3. The executive - Actually does stuff. 

## Useful Links
Controlling the LEDS - https://create.arduino.cc/projecthub/electropeak/neopixel-how-to-control-ws2812-rgb-led-w-arduino-46c08f

Potentiometer code - https://www.arduino.cc/en/tutorial/potentiometer
