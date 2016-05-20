#include "geometry.h"
#include "Arduboy.h"


bool point_in_rectangle(Point point, Rectangle rectangle) {

  short maxX = rectangle.x + rectangle.width;
  short maxY = rectangle.y + rectangle.height;
  
  return point.x >= rectangle.x &&
    point.y >= rectangle.y &&
    point.x <= maxX && 
    point.y <= maxY;
}

Point get_offset(short direction) {
  Point offset;

  if(direction & LEFT_BUTTON) {
    offset.x--;
  }

  if(direction & RIGHT_BUTTON) {
    offset.x++;
  }

  if(direction & UP_BUTTON) {
    offset.y--;
  }

  if(direction & DOWN_BUTTON) {
    offset.y++;
  }

  return offset;
}

//Point operator+(Point a, Point b) {
Point sum_points(Point a, Point b) {
  Point sum;
  sum.x = a.x + b.x;
  sum.y = a.y + b.y;
  return sum;
}


