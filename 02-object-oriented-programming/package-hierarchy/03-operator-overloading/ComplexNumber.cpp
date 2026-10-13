#include "ComplexNumber.h"
#include <cmath>
#include <iostream>


ComplexNumber::ComplexNumber() : a(0), b(0) {
}

ComplexNumber::ComplexNumber(double a, double b) : a(a), b(b) {
}

ComplexNumber::ComplexNumber(const ComplexNumber& other) : a(other.a), b(other.b) {
}

ComplexNumber::~ComplexNumber() {}

std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
os << "(" << c.a << ", " << c.b << ")";
return os;
}

std::istream& operator>>(std::istream& is, ComplexNumber& c){
is >> c.a >> c.b;
return is;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
return ComplexNumber(a + other.a, b + other.b);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const {
return ComplexNumber(a - other.a, b - other.b);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
return ComplexNumber(a * other.a - b * other.b, a * other.b + b * other.a);
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) const {
    double temp1 = (a * other.a + b * other.b) / (other.a * other.a + other.b * other.b);
    double temp2 = (b * other.a - a * other.b) / (other.a * other.a + other.b * other.b);
    return ComplexNumber(temp1,temp2);
}

bool ComplexNumber::operator==(const ComplexNumber& other) const{
if (this->a == other.a && this->b == other.b) {
return true;
} else {
return false;
}
}

bool ComplexNumber::operator!=(const ComplexNumber& other) const{
return !(*this == other);
}

ComplexNumber ComplexNumber::operator^(double angle) const {
ComplexNumber rotate (a*cos(angle)-b*sin(angle), a*sin(angle)+b*cos(angle));
return rotate;
}

ComplexNumber& ComplexNumber::operator++() {
this->a++;
this->b++;
return *this;
}

ComplexNumber ComplexNumber::operator++(int) {
ComplexNumber temp = *this;
this->a++;
this->b++;
return temp;
}

ComplexNumber& ComplexNumber::operator--() {
this->a--;
this->b--;
return *this;
}

ComplexNumber ComplexNumber::operator--(int) {
ComplexNumber temp = *this;
this->a--;
this->b--;
return temp;
}

double ComplexNumber::operator[](int index) {
    if (index == 0) {
        return a;
    } if (index == 1) {
        return b;
    } else {
        throw std:: out_of_range("index should be 0 or 1");
    }
}

double ComplexNumber::operator~() const {
return sqrt(a*a + b*b);
}

ComplexNumber ComplexNumber::operator!() const {
return ComplexNumber(a,-b);
}