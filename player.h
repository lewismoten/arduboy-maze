#ifndef PLAYER_H
#define PLAYER_H

#include "geometry.h"

struct Player : Point {
};

bool move_player(Player& player, short direction, Rectangle& area);
void draw_player(Player& player);


#endif
