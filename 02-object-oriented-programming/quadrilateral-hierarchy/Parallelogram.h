

#ifndef INC_2_PARALLELOGRAM_H
#define INC_2_PARALLELOGRAM_H

#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
private:
    double shorterSide;
    double longerSide;
    double acuteAngle;
public:
    Parallelogram ();
    Parallelogram (const Point& a, const Point& b, const Point& c, const Point&d, double shorterSide, double longerSide, double acuteAngle);
    Parallelogram (const Parallelogram& p);
    ~Parallelogram ();
    void setPoint (int index, const Point& p);
    void setpoint (int index, double x, double y);
    double area() const;
    double getShorterSide () const;
    double getLongerSide () const;
    double getAcuteAngleInRadian () const;

};
#endif //INC_2_PARALLELOGRAM_H