#include "Polygon.h"
using namespace std;

Polygon::Polygon(int s) {
this->size = s;
points=new Point[size];
}

Polygon::Polygon(int s, Point* vertices) : size(s), points(new Point[size]) {
    for (int i = 0; i < size; i++) {
        points[i] = vertices[i];
    }
}

Polygon::Polygon(const Polygon& other) : size(other.size), points(new Point[size]) {
    for (int i = 0; i < size; i++) {
        points[i] = other.points[i];
    }
}

Polygon::~Polygon() {
delete[] points;
}

void Polygon::setPoint (int index, const Point& p) {
    if (index >= 0 && index < size) {
        points[index] = p;
    }
}

void Polygon::setpoint (int index, double x, double y) {
    if (index >= 0 && index < size) {
        points[index].setX(x);
        points[index].setY(y);
    }
}

double Polygon::area() const{
double area = 0;
for (int i = 0; i < size; i++) {
int j=(i+1)%size;
area += (points[i].getX() * points[j].getY()) - (points[i].getY() * points[j].getX());
}
if (area >= 0) return 0.5*area;
else return -(0.5*area);
}



