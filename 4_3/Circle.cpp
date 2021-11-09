#include<iostream>
#include "Circle.h"

const float PI = 3.141593;
using namespace std;

Circle::Circle(){
}

Circle::~Circle()
{
}

float Circle::getr(){
    return r;
}
    
float Circle::getR(){
    return R;
}

void Circle::setCircle(){
    cout << "Please input the r : ";
    cin >> r ;
    R=r+3;
}

float Circle::roadArea(){
    return PI*(R*R-r*r);
}

float Circle::around(){
    return PI*2*R;
}

