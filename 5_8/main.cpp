#include <iostream>

using namespace std;

/*---常数据成员---*/

class A
{
public:
    A(int a):a(a){}//常数据必须在构造器初始化
    void print()
    {
        cout << "a="<<a<<",b="<<b;
    }
private:
    const int a;
    static const int b;
};

const int A::b = 10;//静态常数据成员——>在类外声明和初始化

int main()
{
    A a(2);
    a.print();
    return 0;
}
