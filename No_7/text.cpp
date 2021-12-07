#include<iostream>
#include "Complex.cpp"
using namespace std;

int main(){
    Complex c1,c2;
    cout << "input c1:" << endl;
    cin >> c1;
    cout << "c1 = " << c1 << endl;

    cout << "input c2:" << endl;
    cin >> c2;
    cout << "c2 = " << c2 << endl;

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;
    cout << "c1 + c2 = " << c3 << endl;
    cout << "c1 - c2 = " << c4 << endl;
    cout << "c1 * c2 = " << c5 << endl;

    return 0;
}