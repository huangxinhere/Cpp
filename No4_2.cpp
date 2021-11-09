#include <iostream>
using namespace std; 

int func(int n){
    if(n == 1)
        return 1;
    else{
        return func(n-1)*n;
    }
}

int main(){
    int m,n;
    cout << "Please input m :(little)" << endl;
    cin >> m;
    cout << "Please input n :(bigger)" << endl;
    cin >> n;
    cout << "The result is : " << func(n)/(func(m)*func(n-m));

    return 0;
}