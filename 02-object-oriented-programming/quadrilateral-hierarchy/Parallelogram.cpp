#include "Parallelogram.h"
#include "Point.h"
using namespace std;

Parallelogram::Parallelogram():Quadrilateral(), shorterSide(0), longerSide(0), acuteAngle(0) {}
Parallelogram::Parallelogram(const Point& a, const Point& b, const Point& c, const Point&d, double s, double l, double angel):
Quadrilateral(a,b,c,d), shorterSide(s), longerSide(l), acuteAngle(angel) {}
Parallelogram::Parallelogram(const Parallelogram &other):
Quadrilateral(other), shorterSide(other.shorterSide), longerSide(other.longerSide), acuteAngle(other.acuteAngle) {}
Parallelogram::~Parallelogram() {}

void Parallelogram::setPoint (int index, const Point& p) {
    Quadrilateral::setPoint (index, p);
}
void Parallelogram::setpoint (int index, double x, double y) {
    Quadrilateral::setpoint(index,x,y);
}
double Parallelogram::area() const {
    return Quadrilateral::area();
}
double Parallelogram::getShorterSide () const {
    return shorterSide;
}
double Parallelogram::getLongerSide () const {
    return longerSide;
}
double Parallelogram::getAcuteAngleInRadian () const {
    return acuteAngle;
}
