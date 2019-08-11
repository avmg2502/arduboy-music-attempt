#include <Arduboy2.h>
Arduboy2 arduboy;

int tonePin = 11;
void setup() {arduboy.begin();arduboy.clear();}

void midi() {
    tone(tonePin, 184, 409.88372093);
    delay(455.426356589);
    tone(tonePin, 277, 8.72093023256);
    delay(9.68992248062);
    delay(9.68992248062);
    tone(tonePin, 38, 8.72093023256);
    delay(9.68992248062);
    tone(tonePin, 41, 8.72093023256);
    delay(9.68992248062);
    tone(tonePin, 1479, 8.72093023256);
    delay(9.68992248062);
    tone(tonePin, 415, 17.4418604651);
    delay(19.3798449612);
    tone(tonePin, 1244, 17.4418604651);
    delay(19.3798449612);
    delay(116.279069767);
    tone(tonePin, 146, 17.4418604651);
    delay(19.3798449612);
}

void loop() {
    // Play midi
    midi();
}
