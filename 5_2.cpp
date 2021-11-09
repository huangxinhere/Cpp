#include <iostream>

using namespace std;

/*变量的生存期和可见性*/

int i = 1;

void other(){
    //同名，仍符合可见性；静态，一直存在，但作用域也不同
    static int a = 2;
    static int b; //默认为0
    int c = 10;

    a+=2;
    i+=2;
    c+=2;
    cout << "---OTHER---" << endl;
    cout << " i: " << i << " a:" << a << " b:" << b << " c:" << c << endl;
    b = a; 
}

int main(){
    static int a;
    int b = -10;
    int c = 0;

    cout << "---MAIN---" << endl;
    cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
    c += 8;
    other();

    cout << "---MAIN---" << endl;
    cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
    i += 10;
    other();

    return 0;
}