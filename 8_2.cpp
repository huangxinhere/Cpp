#include <iostream>
using namespace std;

class Clock{
private:
    int hour, minute, second;

public:
    Clock(int hour = 0, int minute = 0, int second=0);
    void showTime() const;
    Clock operator++ ();       //前置单目运算符重载(++a)
    Clock operator++ (int);     //后置单目运算符(a++)
};

Clock::Clock(int hour/*=0*/, int minute/*=0*/, int second/*=0*/){
    if (0 <= hour && hour < 24 &&
        0 <= minute && minute < 60 &&
        0 <= second && second < 60)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }else 
        cout  << "Time error!!" << endl;
}

void Clock::showTime() const{
    cout << hour << " : " << minute << " : " << second << endl;
}

////////
Clock Clock::operator++(){
    second++;
    if(second >= 60){
        second -= 60;
        minute++;
        if(minute >= 60){
            minute -= 60;
            hour = (hour + 1) % 24;
        }
    }
    return *this;   //返回正在被操作的对象 || 创建一个临时对象 return Clock(x,y,z);
}

Clock Clock::operator++(int){//cpp中,无作用的参数可省略
    Clock old = *this;
    ++(*this);      //自身加1
    return old;     //返回原值
}

int main(){
    Clock myClock(23, 59, 59);
    cout << "First time input: ";
    myClock.showTime();
    cout << "Show myClock++:   "; //后置,a++,(语句结束前)不变
    (myClock++ ).showTime();    
    cout << "Show ++myClock:   "; //前置,++a,自增1
    (++myClock).showTime();

    int i=0;
    i++;
    cout << i << endl;//1
    //++i;
    cout << ++i << endl;//2
    return 0;
}