#include "Complex.h"

Complex Complex::operator+(const Complex &c){
    return Complex(real + c.real, image + c.image);
}

Complex Complex::operator-(const Complex &c){
    return Complex(real - c.real, image - c.image);
}

Complex Complex::operator*(const Complex &c){
    return Complex(real * c.real - image*c.image, real*c.image+image*c.image);
}

ostream& operator << (ostream& os, const Complex& c){
    if (c.real != 0)
        os << c.real;
    if (c.image > 0)
        os << '+' << c.image << 'i';
    if (c.image < 0)
        os << c.image << 'i';
    return os;
}

istream& operator >> (istream& is, Complex& c){
    cout << "input shibu:";
    is >> c.real;
    cout << "input xubu:";
    is >> c.image;
    return is;
}