#include "ComplexNumber.h"
#include <iostream>
using namespace std;

void testComplexNumber() {

ComplexNumber c1(3, 4);

cout<<"__________test << ++ -- [] ~ !__________"<<endl;

cout << "Original c1: " << c1 <<endl;

cout << "After ++c1: " << ++c1 <<endl;

cout << "After c1++: " << c1++ <<endl;

cout << "Value of c1 after c1++: " << c1 <<endl;

cout << "After --c1: " << --c1 <<endl;

cout << "After c1--: " << c1-- <<endl;

cout << "Value of c1 after c1--: " << c1 <<endl;

cout << "Real part (c1[0]): " << c1[0] <<endl;

cout << "Imaginary part (c1[1]): " << c1[1] <<endl;

cout<<"Modulus of c1: "<<~c1<<endl;

cout<<"Complex conjugate of c1: "<<!c1<<endl;




ComplexNumber c2(1, 2);

cout<<"__________test + - * / == != ^__________"<<endl;

cout << "Original c1: " << c1 <<endl;
cout<<"Original c2: " << c2 <<endl;

cout<<"Adds c1 and c2: "<<c1+c2<<endl;

cout<<"Substracts c1 and c2: "<<c1-c2<<endl;

cout<<"Multiplys c1 and c2: "<<c1*c2<<endl;

cout<<"Divides c1 and c2: "<<c1 /c2<<endl;

cout<<"If c1 and c2 are equal: "<<((c1==c2)?"true":"false")<<endl;

cout<<"If c1 and c2 are not equal: "<<((c1!=c2)?"true":"false")<<endl;
cout<<endl;

double angle = 1.571;

cout<<"c2 after rotate "<<angle<<" (radian) is: "<<(c2^angle)<<endl;



cout<<"__________test >>__________"<<endl;

ComplexNumber c3;

cout<<"Please enter a complex number: "<<endl;

cin>>c3;



cout<<"__________test out of range__________"<<endl;
cout << "Invalid index access (c1[3]): ";
try {
    double value = c1[3];
    cout<<"Complex number is: "<<value<<endl;
}catch (const out_of_range& e) {
   cout << "Error: " << e.what() <<endl;
}    // Handling out-of-range access

}




void testMandelbrot(ComplexNumber Z, ComplexNumber C, int n) {
    cout<<"__________test mandelbrot__________"<<endl;
    cout<<"Original Z: "<<Z<<" C: "<<C<<" n: "<<n<<endl;
    for (int i = 0; i < n; i++) {
        Z = Z * Z + C;
        cout<<"After "<<i+1<<" interation Z: "<<Z<<endl;
    }
cout<<"Final Z: "<< Z <<endl;

}




int main() {

testComplexNumber();
ComplexNumber Z(2,3);
ComplexNumber C(5,6);
int n = 3;
testMandelbrot(Z, C, n);
return 0;
}