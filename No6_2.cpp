#include<iostream>
using namespace std;

class Complex
{
private:
    int real,imag;
public:
    Complex(int x,int y):real(x),imag(y){};
    friend Complex operator+(const Complex &a, const Complex &b);
    friend Complex operator-(const Complex &a, const Complex &b);
    friend Complex operator*(const Complex &a, const Complex &b);
    friend ostream & operator<<(ostream &out, const Complex &num);
};
Complex operator+(const Complex &a, const Complex &b){
    return Complex(b.real+a.real, b.imag+a.imag);
}
Complex operator-(const Complex &a, const Complex &b){
    return Complex(a.real-b.real, a.imag-b.imag);
}
Complex operator*(const Complex &a, const Complex &b){
    return Complex(a.real*b.real-a.imag*b.imag, a.imag*b.real+a.real*b.imag);
}
ostream & operator<<(ostream &out, const Complex &num){
    out << num.real << "+" << num.imag << "i" << endl;
    return out;
}

int main(){
    Complex num1(2,2),num2(3,1);
    cout << "num1+num2: " << num1 + num2;
    cout << "num1-num2: " << num1 - num2;
    cout << "num1*num2: " << num1 * num2;
}
