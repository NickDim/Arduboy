#include "Arduboy.h"

Arduboy arduboy;

void setup() {
arduboy.begin();
arduboy.setFrameRate(15);
int i = 0;
}

void loop() {
  
  arduboy.print("Hello World\n\n");
  
if(arduboy.nextFrame()) {
  
  arduboy.setCursor(9, 9);
  arduboy.print("You have been through " + i + " frames");
  arduboy.display();

  i++;
  }
}
