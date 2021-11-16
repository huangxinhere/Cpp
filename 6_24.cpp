#include <iostream>

using namespace std;

/*text for getline*/
/*
*1.当定义分隔符时，第一个扫描到的有效
*2.输入过长时，有效的是第一个分隔符以前，多出来的等待下一次自动输入
*3.输入过短（无分隔符），回车继续输入，直到有分隔符为止（回车也算一个字符）
*/

int main(){
    for (int i = 0; i < 2; i++)
    {
        string city,state;
        getline(cin, city, ',');
        getline(cin, state);
        cout << "City: " << city << "  State: " << state << endl;
    }
    return 0;
}