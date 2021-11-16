#include<iostream>
#include <cmath>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle rect;
    rect.initRactangle(2, 10, 10, 5);
    rect.move(3,2);     //继承
    cout << rect.getX() << ","
        << rect.getY() << ","
        << rect.getW() << ","
        << rect.getH() << ",";   
    return 0;
}