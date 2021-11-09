#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:
    Point(int x=0,int y=0) : x(x),y(y){} //可以默认初始化
    friend float dist(const Point &p1,const Point &p2); //不要忘记friend，否则函数访问对象成员数据是非法的，报错提醒是私有的
private:
    int x,y;

};

float dist(const Point &p1,const Point &p2)             //常引用，引用对象不可更改（保护共享数据）
{
    double c = p1.x - p2.x;
    double d = p1.y - p2.y;
    return static_cast<float>(sqrt(c*c+d*d));
}

int main()
{
    Point a(1,1),b(4,5);                                //常引用可绑定普通的对象或常对象
    cout << "The distance is : ";
    cout << dist(a,b)<<endl;
    return 0;
}


//在函数中无需改变其值的参数：
//1. 不宜使用普通引用，会使常对象无法被传入
//2. 传值方式（大对象耗时较多）
//3. 传递常引用
