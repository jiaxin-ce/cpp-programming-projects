#include "Rhombus.h"
using namespace std;

Rhombus::Rhombus() : Quadrilateral(), side(0), acuteAngle(0) {}
Rhombus::Rhombus(const Point& a, const Point& b, const Point& c, const Point& d, double side, double angle):
Quadrilateral(a, b, c, d), side(side), acuteAngle(angle) {}
Rhombus::Rhombus(const Rhombus& other): Quadrilateral(other), side(other.side), acuteAngle(other.acuteAngle) {}
Rhombus::~Rhombus(){}

void Rhombus::setPoint (int index, const Point& p) {
Quadrilateral::setPoint (index, p);
}

void Rhombus::setpoint (int index, double x, double y) {
Quadrilateral::setpoint(index,x,y);
}

double Rhombus::area() const {
return Quadrilateral::area();
}

double Rhombus::getSide() const {
return side;
}

double Rhombus::getAngleInRadian() const {
return acuteAngle;
}