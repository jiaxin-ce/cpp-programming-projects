#include "Point.h"
using namespace std;

Point::Point() : x(0), y(0) {}
Point::Point(double x, double y) : x(x), y(y) {}
Point::Point(const Point& other) : x(other.x), y(other.y) {}
Point::~Point(){}
void Point::setX(double a) {
x=a;
}

double Point::getX() const {
return x;
}

void Point::setY(double b) {
y=b;
}

double Point::getY() const {
return y;
}
