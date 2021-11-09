#include <iostream>
 
using namespace std;

/*类的静态数据成员*/

int i = 1;      //用来观察对象销毁的操作。放进了函数里面，函数结束对象就销毁了

class  Point
{
private:
    int x,y;
    static int count;
public:
     Point(int x, int y):x(x),y(y){
         count++;
     };
     Point(Point &p){
         x = p.x;
         y = p.y;
         count++; //实验引用和构造是否没有关系————Point b(a)只是复制，并没有构造过程...
     }
    ~ Point(){
        i--;
        count-- ;
    };
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    static void showCount(){
        cout << " count = " << count << endl;
    }
};

int Point::count = 0;

void func(){
    Point a(4,5);
    cout << "Point A : " << a.getX() <<"," << a.getY();
    a.showCount();

    Point b(a);
    cout << "Point B : " << b.getX() << "," << b.getY();
    b.showCount();
}

int main(){
    func(); 
    cout << "i = " << i;
    return 0;
} 

