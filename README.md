# Arduino-Motion-Sensing-LEDs
The goal of this build project is to turn LEDs on and off with a motion sensor.

**Project Resources:**
- Wiring and circuit diagrams (attached below)
- Youtube tutorial coming soon
- Check out my Instagram account @rikkibuilds to learn more: https://www.instagram.com/rikkibuilds/ 

**For this project you will need:**
- Arduino Uno Microcontroller
- Ultrasonic sensor
- LED light(s)*
- Arudino IDE
  
**You will also probably need:**
- Resistor(s) (to keep from frying the LED, 220 Ohm should work for basic LEDs)
- Jumper wires
- Breadboard
- Arduino USB cord (to upload code)

*alternatively, you can use a strand of pre-made LED string lights for a more practical build project.

**Steps:**
1. Use the wiring diagram below to set up the electrical components.
- **THE PIN NUMBERS ARE IMPORTANT** - they correspond to the code in this repository.
  If you want to use different pins on your Arduino, simply change the pin number in the code to match.
- Arduino pin 2 connects to the echo pin of the ultrasonic sensor.
- Arduino pin 3 connects to the trig pin of the ultrasonic sensor.
- Arduino pin 5 connects to the the positive leg (anode) of the LED.
2. Copy and paste the code in this repository into your Arduino IDE. Compile and upload it.
3. Test out your motion sensor! The distance threshold is currently set to 55 centimeters.
  If you would like to change the motion sensing distance, change the value of the "threshold" variable and then re-upload your code. 

<img width="595" alt="image" src="https://github.com/user-attachments/assets/83e41bc6-84fe-42f0-b1d4-9169f31bf563">

<img width="488" alt="image" src="https://github.com/user-attachments/assets/293f0d91-1d75-48c1-9596-9e0c261bcfa5">


