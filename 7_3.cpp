#include <iostream>
using namespace std;

/*类型兼容规则：派生类对象转化成基类对象，只能使用基类成员*/

class Base1{
public:
    void display() const{
        cout << "Base1::display()" << endl;
    } 
};
class Base2: public Base1{
public:
    void display() const{
        cout << "Base2::display()" << endl;
    } 
};
class Base3: public Base2{
public:
    void display() const{
        cout << "Base3::display()" << endl;
    } 
};

void func(Base1 *base){
    base->display();
}
int main(){
    Base1 base1;
    Base2 base2;
    Base3 base3;

    func(&base1);
    func(&base2);
    func(&base3);

    return 0;
}