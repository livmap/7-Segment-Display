#include <Arduino.h>
#include "letters.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(common, OUTPUT);
  pinMode(power, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // LED_BUILTIN FOR TESTING
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);

  // Power Light

  digitalWrite(common, HIGH);
  digitalWrite(power, HIGH); // Switch on Power Light

  // Show JESUS
  showJ();
  delay(delayTime);
  showE();
  delay(delayTime);
  showS();
  delay(delayTime);
  showU();
  delay(delayTime);
  showS();

  // Testing th git

}
