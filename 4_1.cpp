#include <iostream>
#include <string.h>
#include <string>
int length = 12;

using namespace std;

int main(){
    char str[] = "hello world";
    char *sp = str;

    cout << "---No.1---" << endl;
    for (int i = 0; i < strlen(str); i++) //strlen长度不包含‘\0’
    {
        cout << *(sp+i);
    }

    cout << "\n---No.2---" << endl;
    while (*sp != '\0')
    {
        cout << *sp;
        sp = sp+1;
    }

    cout << "\n---No.2 and No.3---" << endl;
    int i = 0;
    sp = str;
    while (i != length && *(sp+i) != '\0')
    {
        cout << *(sp+i);
        i++;
    }

    cout << "\n---No.4---" << endl;
    char a[] = "abc";
    char b[] = "ab";
    cout << a << endl;
    cout << b << endl;

    cout << "---No.5---" << endl;
    char c[] = "ab";
    string cc;
    cc = c;//字符数组可以初始化字符串，反过来就不可以？为什么
    cout << "*char:" <<strlen(c) << endl;
    cout << "string:" << cc << " ,and length: " << cc.length() << endl;

    char c1[4] = {'a','b'};
    cc = c1;
    cout << "*char2:"<<strlen(c1) << endl;
    cout << "string:" << cc << " ,and length: " << cc.length() << endl;
    
    cout << "What the char is: "<< c1[3] << endl;


    return 0;
}
//结论1：char str[] = "hello world"形式的字符串长度会加1，且最后一位为'\0'
//2.字符数组可以初始化字符串,而且是终止符前面的有效字符，反之不可，字符串是个变量，数组给的是首地址...而输入可以更新数组...
//3.利用函数计算字符数组长度的时候会忽略掉最后的终止符
//4.未被赋值的字符元素为空
//5.打印数组名会把整个元素打印出来