#ifndef _POINT_H
#define _POINT_H    //表示后者已被定义过
/*避免头文件重复编译：
*1.首先判断标识符 _POINT_H 是否被定义过
*未定义，则继续编译，并对标识符进行宏定义，标志已参与编译
**/

/*公有继承*/
class Point
{
private:
    float x, y;
public:
    void initPoint(float x=0, float y=0){
        this->x = x;
        this->y = y;
    }
    void move(float offx, float offy){
        x += offx, y += offy;
    }
    float getX(){return x;}
    float getY(){return y;}
};

#endif