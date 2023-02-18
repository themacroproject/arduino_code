/*
 Macro Pod Lite

 This sketch demonstrates how to set custom strings to specific 
 keys for the Macro Pod Lite which uses Digispark ATTiny85.

 When you connect pin 2 to ground, it performs a logout.
 It uses keyboard combinations to do this, as follows:

 Circuit:
 * Digispark ATTiny85
 * wire to connect P0 to OUT of key1.
 * wire to connect P1 to OUT of key2.
 * wire to connect P2 to OUT of key3.
 * wire to connect P3 to OUT of key4.
 * wire to connect P4 to OUT of key5.

 created 14 Feb 2023
 by Aniket Katkar
 THE MACRO PROJECT: https://themacroproject.github.io

 This example is in the public domain

 https://github.com/themacroproject/arduino_code
 https://github.com/themacroproject/pcb_designs
 */

#include "DigiKeyboard.h"

// the number of the key pin
const int keyPin1 = 1;  
const int keyPin2 = 2;
const int keyPin3 = 3;
const int keyPin4 = 4;
const int keyPin5 = 5

// declare key variable states for reading the key 1 status
int keyState1, keyState2, keyState3, keyState4, keyState5 = 0;

void setup() {
  Serial.begin(115200);
  pinMode(keyPin1, INPUT);
  pinMode(keyPin2, INPUT);
  pinMode(keyPin3, INPUT);
  pinMode(keyPin4, INPUT);
  pinMode(keyPin5, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  keyState1 = digitalRead(keyPin1);
  keyState2 = digitalRead(keyPin2);
  keyState3 = digitalRead(keyPin3);
  keyState4 = digitalRead(keyPin4);
  keyState5 = digitalRead(keyPin5);

  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);

  // Just to print on serial monitor to debug
  Serial.print("Started");

  // Check which key got pressed and type corressponding string letter by 
  // letter on the computer (assumes US-style keyboard)
  if (buttonState == HIGH) {
    DigiKeyboard.println("eInfochips@30");
  } else if (buttonState == HIGH) {
    DigiKeyboard.println("eInfochips@30");
  } else if (buttonState == HIGH) {
    DigiKeyboard.println("eInfochips@30");
  } else if (buttonState == HIGH) {
    DigiKeyboard.println("eInfochips@30");
  } else if (buttonState == HIGH) {
    DigiKeyboard.println("eInfochips@30");
  }

  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  DigiKeyboard.delay(5000);
}
