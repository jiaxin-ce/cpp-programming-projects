

#ifndef INC_2_POLYGON_H
#define INC_2_POLYGON_H

#include "Point.h"
class Polygon {
protected:
int size;
Point* points;

public:
Polygon(int size);
Polygon(int size, Point* vertices);
Polygon(const Polygon& other);

void setPoint (int index, const Point& p);
void setpoint (int index, double x, double y);
double area() const;
~Polygon();
};
#endif //INC_2_POLYGON_H