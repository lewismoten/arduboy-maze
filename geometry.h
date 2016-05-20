#ifndef RECTANGLE_H
#define RECTANGLE_H

struct Point {
  short x = 0;
  short y = 0;
};

//Point operator+=(Point a, Point b);
Point sum_points(Point a, Point b);

struct Size {
  short width = 0;
  short height = 0;
};

struct Rectangle : Point, Size {
};

bool point_in_rectangle(Point point, Rectangle rectangle);
Point get_offset(short direction);

#endif
