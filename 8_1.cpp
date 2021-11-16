#include <iostream>

using namespace std;

/*运算符重载*/

class Complex{
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r),imag(i){}
    Complex operator+ (const Complex &c2) const{
        return Complex(real + c2.real, imag + c2.imag);
    }
    Complex operator- (const Complex &c2) const{
        return Complex(real - c2.real, imag - c2.imag);
    };
    void display() const;
};

void Complex::display() const{
    cout << "(" << real << "," << imag << ")" << endl;
}

/*Complex Complex::operator-(const Complex &c2) const{
    return Complex(real - c2.real, imag - c2.imag);
}报错？？*/

int main(){
    Complex c1(5,4),c2(2,3),c3;
    cout << "c1 = " ; c1.display();
    cout << "c2 = " ; c2.display();

    c3 = c1 - c2;
    cout << "c3 = " ; c3.display();


    return 0;
}