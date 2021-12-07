#include<iostream>
using namespace std;
int i = 0;

int add(){
    int i = 0;
    return ++i;
}
int addstatic(){
    return ++i;
}

int main(){
    for(int j = 0; j<10; j++){
        cout << "add: " << add() << endl;
        addstatic();
        cout << "addstatic: " << i << endl;
    }

    return 0;
}