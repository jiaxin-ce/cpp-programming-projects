

#ifndef INC_2_QUADRILATERAL_H
#define INC_2_QUADRILATERAL_H
#include "Polygon.h"
#include "Point.h"

class Quadrilateral : public Polygon{
public:

Quadrilateral();
Quadrilateral(const Point& a, const Point& b, const Point& c, const Point& d);
Quadrilateral(const Quadrilateral& other);
void setPoint (int index, const Point& p);
void setpoint (int index, double x, double y);
double area() const;
~Quadrilateral();
};

#endif //INC_2_QUADRILATERAL_H