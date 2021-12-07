#include <iostream>
#include <math.h>
using namespace std;

void yue(int* x,int* y){
    int least = *x > *y? *y : *x;
    for (int i = least; ; i--)
    {
        if (*x%i == 0 && *y%i == 0)
        {
            *x = *x/i;
            *y = *y/i;
            break;
        } 
    } 
}

class Num
{
private:
    int up,down;
public:
    Num(int x=0,int y=1):up(x),down(y){}
    friend ostream & operator<<(ostream &out, const Num &num);
    Num operator+ (const Num &num2);
    Num operator- (const Num &num2);
    Num operator* (const Num &num2);
    Num operator/ (const Num &num2);
    void operator==(const Num &num2);
    void operator!=(const Num &num2);
    void operator>=(const Num &num2);
    void operator>(const Num &num2);
    void operator<=(const Num &num2);
    void operator<(const Num &num2);
    void show(){
        cout << "The result is:" << up << "," << down << endl;
    }
};

Num Num::operator+(const Num &num2){
    int common = down >= num2.down? down: num2.down;
    for (int i = common; ; i++)
    {
        if (i%down == 0 && i%num2.down == 0)
        {
            int up1 = up*(i/down)+num2.up*(i/num2.down);
            int down1 = down*(i/down);
            yue(&up1,&down1);
            return Num(up1,down1);
        }
    }
}
Num Num::operator-(const Num &num2){
    int common = down >= num2.down? down: num2.down;
    for (int i = common; ; i++)
    {
        if (i%down == 0 && i%num2.down == 0)
        {
            int up1 = abs(up*(i/down)-num2.up*(i/num2.down));
            int down1 = down*(i/down);
            yue(&up1,&down1);
            return Num(up1,down1);
        }
    }
}
Num Num::operator*(const Num &num2){
    int up1 = up*num2.up;
    int down1 = down*num2.down;
    yue(&up1,&down1);
    return Num(up1,down1);
}
Num Num::operator/(const Num &num2){
    int up1 = up*num2.down;
    int down1 = down*num2.up;
    yue(&up1,&down1);
    return Num(up1,down1);
}
void Num::operator==(const Num &num2){
    if((up+num2.up) % (down+num2.down) == 0)
        cout << " The two numbers are the same." << endl;
    else 
        cout << " Different." << endl;
}
void Num::operator!=(const Num &num2){
    *this == num2;
}
void Num::operator>=(const Num &num2){
    int common = down >= num2.down? down: num2.down;
    for (int i = common; ; i++)
    {
        if (i%down == 0 && i%num2.down == 0)
        {
            if(up*(i/down)>=num2.up*(i/num2.down))
            {
                cout << " left >= right. " << endl;break;
            }
            else 
                {cout << " left not >= right. " << endl;break;}
        }
    }
}
void Num::operator>(const Num &num2){
    int common = down >= num2.down? down: num2.down;
    for (int i = common; ; i++)
    {
        if (i%down == 0 && i%num2.down == 0)
        {
            if(up*(i/down)>=num2.up*(i/num2.down))
                {cout << " left > right. " << endl;break;}
            else 
                {cout << " left not > right. " << endl;break;}
        }
    }
}
void Num::operator<=(const Num &num2){
    int common = down >= num2.down? down: num2.down;
    for (int i = common; ; i++)
    {
        if (i%down == 0 && i%num2.down == 0)
        {
            if(up*(i/down)>=num2.up*(i/num2.down))
                {cout << " left not <= right. " << endl;break;}
            else 
                {cout << " left <= right. " << endl;break;}
        }
    }
}
void Num::operator<(const Num &num2){
    int common = down >= num2.down? down: num2.down;
    for (int i = common; ; i++)
    {
        if (i%down == 0 && i%num2.down == 0)
        {
            if(up*(i/down)>=num2.up*(i/num2.down))
                {cout << " left not < right. " << endl;break;}
            else 
                {cout << " left < right. " << endl;break;}
        }
    }
}
ostream & operator<<(ostream &out, const Num &num){
    out << "(" << num.up << "," << num.down << ")" << endl;
    return out;
}

int main(){
    Num num1(3,7),num2(1,3);
    cout << "num1+num2: " << num1 + num2;
    cout << "|num1-num2|: " << num1 - num2;
    cout << "num1*num2: " << num1 * num2;
    cout << "num1/num2: " << num1 / num2;
    cout << "num1==num2:" ; num1 == num2;
    cout << "num1!=num2:" ; num1 != num2;
    cout << "num1>=num2:" ; num1 >= num2;
    cout << "num1>num2:" ; num1 > num2;
    cout << "num1<=num2:" ; num1 <= num2;
    cout << "num1<num2:" ; num1 < num2;
    
    return 0;
}