#include<iostream>
#ifndef _COMPLEX_H
#define _COMPLEX_H
using namespace std;

class Complex
{
private:
    double real, image;
public:
    Complex(double r = 0.0, double i = 0.0){
        real = r;
        image = i;
    }
    
    Complex operator+(const Complex &c);
    Complex operator-(const Complex &c);
    Complex operator*(const Complex &c);

    friend ostream& operator <<(ostream&, const Complex&);
    friend istream& operator >>(istream&, Complex&);
};

#endif

