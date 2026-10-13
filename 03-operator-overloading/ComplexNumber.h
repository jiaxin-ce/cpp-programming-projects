
#ifndef INC_2_COMPLEXNUMBER_H
#define INC_2_COMPLEXNUMBER_H
#include <iosfwd>

class ComplexNumber {
private:
double a;
double b;

public:
ComplexNumber();
ComplexNumber(double a, double b);
ComplexNumber(const ComplexNumber&);
~ComplexNumber();

ComplexNumber operator+(const ComplexNumber&) const;
ComplexNumber operator-(const ComplexNumber&) const;
ComplexNumber operator*(const ComplexNumber&) const;
ComplexNumber operator/(const ComplexNumber&) const;
bool operator==(const ComplexNumber&) const;
bool operator!=(const ComplexNumber&) const;
ComplexNumber operator^(double) const;
ComplexNumber& operator++();
ComplexNumber operator++(int);
ComplexNumber& operator--();
ComplexNumber operator--(int);
double operator[](int);
double operator~() const;
ComplexNumber operator!() const;

friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c);
friend std::istream& operator>>(std::istream& is, ComplexNumber& c);

};

#endif //INC_2_COMPLEXNUMBER_H