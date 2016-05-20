#include "Arduboy.h"
#include "player.h"
#include "geometry.h"

Arduboy arduboy;
Player player;
Rectangle area;

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(8);

  area.width = 64;
  area.height = 48;
  area.x = 32;
  area.y = 10;
  player.x = 44;
  player.y = 22;

  redraw();
}

void loop() {

  // mocking debounce...
  if(!arduboy.nextFrame()) {
    return;
  }

  uint8_t buttons = arduboy.getInput();
  if(move_player(player, buttons, area)) {
    redraw();
  }
}

void redraw() {
  arduboy.clear();
  arduboy.drawRect(area.x, area.y, area.width, area.height, WHITE);
  arduboy.drawRect(player.x, player.y, 1, 1, WHITE);
  
  arduboy.display();
}
