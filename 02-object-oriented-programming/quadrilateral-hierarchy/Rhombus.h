
#ifndef INC_2_RHOMBUS_H
#define INC_2_RHOMBUS_H
#include "Quadrilateral.h"
#include "Point.h"

class Rhombus: public Quadrilateral{
private:
    double side;
    double acuteAngle;
public:
    Rhombus();
    Rhombus(const Point& a, const Point& b, const Point& c, const Point& d, double side, double angle);
    Rhombus(const Rhombus& other);
    ~Rhombus();
    void setPoint (int index, const Point& p);
    void setpoint (int index, double x, double y);
    double area() const;
    double getSide() const;
    double getAngleInRadian() const;
};

#endif //INC_2_RHOMBUS_H