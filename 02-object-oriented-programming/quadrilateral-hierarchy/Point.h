

#ifndef INC_2_POINT_H
#define INC_2_POINT_H

class Point{
private:
double x;
double y;
public:
Point();
Point(double x, double y);
Point(const Point& other);
void setX(double a);
double getX() const;
void setY(double b);
double getY() const;
~Point();
};


#endif //INC_2_POINT_H