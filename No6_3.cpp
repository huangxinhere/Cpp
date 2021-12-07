#include<iostream>
using namespace std;

class Clock
{
private:
    int hour,minute,second;
public:
    Clock(int h,int m,int s):hour(h),minute(m),second(s){}
    Clock operator= (const Clock &clock){
        return clock;
    }
    Clock operator++();
    Clock operator++(int);
    void show(){
        cout << "(" << hour << "," << minute << "," << second <<")" << endl;
    }
};
Clock Clock::operator++(){
    second++;
    if (second >= 60)
    {
        second -= 60;
        minute++;
        if (minute >= 60)
        {
            minute -= 60;
            hour = (hour+1)%24;
        }
    }
    return *this;
}
Clock Clock::operator++(int){
    Clock pre = *this;
    ++(*this);
    return pre;
}
int main(){
    Clock clock(20,3,5);
    clock.show();
    clock++.show();
    clock.show();
    (++clock).show();

}


