#include "Point.h"
#include "Polygon.h"
#include "Quadrilateral.h"
#include "Rhombus.h"
#include "Parallelogram.h"
#include <iostream>
using namespace std;

void testPolygon() {
    cout<<"----------test polygon----------"<<endl;
    int size=5;
    Point vertices[5]={Point(0,0),Point(4,0),Point(5,3),Point(2,5),Point(-1,3)};
    Polygon p(size,vertices);
    cout<<"area: "<<p.area()<<endl;
    string result=(p.area()==21.0)?"pass":"fail";
    cout<<result<<endl;
}

void testQuadrilateral() {
    cout<<"----------test quadrilateral----------"<<endl;
    Quadrilateral q(Point(0,0),Point(3,0),Point(4,7),Point(-1,2));
    cout<<"area: "<<q.area()<<endl;
    string result=(q.area()==18.0)?"pass":"fail";
    cout<<result<<endl;
}

void testRhombus() {
    cout<<"----------test rhombus----------"<<endl;
    Rhombus r(Point(0,0), Point(3,2), Point(0,4), Point(-3,2),3.6,1.7635);
    cout<<"area: "<<r.area()<<endl;
    string result=(r.area()==12.0)?"pass":"fail";
    cout<<result<<endl;
    cout<<"length of side is: "<<r.getSide()<<endl;
    cout<<"angle in radian is: "<<r.getAngleInRadian()<<endl;
}

void testParallelogram() {
    cout<<"----------test parallelogram----------"<<endl;
    Parallelogram p(Point(0,2),Point(2,6),Point(4,6),Point(2,2),2,4.5,1.10654);
    cout<<"area: "<<p.area()<<endl;
    string result=(p.area()==8.0)?"pass":"fail";
    cout<<result<<endl;
    cout<<"length of shorter side is: "<<p.getShorterSide()<<endl;
    cout<<"length of longer side is: "<<p.getLongerSide()<<endl;
    cout<<"angle in radian is: "<<p.getAcuteAngleInRadian()<<endl;
}


int main() {
    testPolygon();
    testQuadrilateral();
    testRhombus();
    testParallelogram();
    return 0;
}