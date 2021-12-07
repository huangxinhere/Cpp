#include<iostream>
#include<string>
using namespace std;

/*getline 的使用*/

int main(){
    string line;
    cout << "Tpye a line terminated by 't' " << endl;
    getline(cin, line, 't');
    cout << line << endl;
    return 0;

}