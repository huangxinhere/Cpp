#include <iostream>
#ifndef _CIRCLE_H_
#define _CIRCLE_H_

using namespace std;

class Circle
{
private:
    float r,R;
public:
    Circle(/* args */);
    ~Circle();
    void setCircle();
    float getr();
    float getR();
    float roadArea();
    float around();
};

#endif