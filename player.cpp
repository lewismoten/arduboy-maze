#include "player.h"
#include "geometry.h"
#include "Arduboy.h"

bool move_player(Player& player, short direction, Rectangle& area) {
  Point offset = get_offset(direction);
    
  // No attempt?
  if(offset.x == 0 && offset.y == 0) {
    return false;
  }
  Point target = sum_points(player, offset);

  // Out of bounds?
  if(!point_in_rectangle(target, area)) {
    return false;
  }

  // Blocked?
//  if(!is_open_cell(area, target)) {
//    return false;
//  }
  player.x = target.x;
  player.y = target.y;
   
  return true;
}

void draw_player(Player& obj) {

}

