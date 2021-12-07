#ifndef _RACTANGLE_H
#define _RACTANGLE_H
#include "Point.h"

/*public和private的区别：private要把基类成员当做私有数据来处理，即只能类内部调用*/

class Rectangle:private Point
{
private:
    float w, h;
public:
    void initRactangle(float x, float y, float w, float h){
        initPoint(x, y);
        this->w = w;
        this->h = h;
    }
    void move(float offX, float offY){
        Point::move(offX, offY);
    }
    float getX(){return Point::getX();}
    float getY(){return Point::getY();}
    float getW(){return w;}
    float getH(){return h;}
};

#endif
