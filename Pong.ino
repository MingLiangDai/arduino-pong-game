#include "pong.h"

void setup() {
  // Setting up the pins
  for (int i; i < 8; i++) {
    pinMode(rows[i], OUTPUT); //Want this to be HIGH, the input to LEDs;
    pinMode(cols[i], OUTPUT);
    digitalWrite(cols[i], HIGH);
  }
  pinMode(A4, INPUT);
}

void loop() {
  // Running the game
// start_game();
}
