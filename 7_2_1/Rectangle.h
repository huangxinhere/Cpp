#ifndef _RACTANGLE_H
#define _RACTANGLE_H
#include "Point.h"

class Rectangle:public Point
{
private:
    float w, h;
public:
    void initRactangle(float x, float y, float w, float h){
        initPoint(x, y);
        this->w = w;
        this->h = h;
    }
    float getW(){return w;}
    float getH(){return h;}
    Rectangle(/* args */);
    ~Rectangle();
};

Rectangle::Rectangle(/* args */)
{
}

Rectangle::~Rectangle()
{
}

#endif
