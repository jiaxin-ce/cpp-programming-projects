#include "Quadrilateral.h"
using namespace std;

Quadrilateral::Quadrilateral():Polygon(4){}
Quadrilateral::Quadrilateral(const Point& a, const Point& b, const Point& c, const Point& d):Polygon(4){
points[0] = a;
points[1] = b;
points[2] = c;
points[3] = d;
}
Quadrilateral::Quadrilateral(const Quadrilateral& other):Polygon(other){}
Quadrilateral::~Quadrilateral() {}

void Quadrilateral::setPoint (int index, const Point& p){
Polygon::setPoint(index, p);
}

void Quadrilateral::setpoint (int index, double x, double y){
Polygon::setpoint(index, x, y);
}

double Quadrilateral::area() const{
   return Polygon::area();
}