#include<iostream>
using namespace std;

class Circle
{
private:
    float radius;
public:
    Circle(float r):radius(r){
        cout << "Circle is constructed here." << endl;
    }
    float getRadius(){
        return radius;
    }
};

class Table
{
private:
    float height;
public:
    Table(float h):height(h){
        cout << "Table is constructed here." << endl;
    }
    float getHeight(){
        return height;
    }
};

class RoundTable:public Circle, public Table
{
private:
    string color;
public:
    RoundTable(float r, float h, string color):Circle(r),Table(h),color(color){
        cout << "RoundTable is constructed here." << endl;
    }
    void show(){
        cout << "RoundTable:" << endl;
        cout << "radius:" << getRadius() << " m." << endl;
        cout << "height:" << getHeight() << " m." << endl;
        cout << "color:" << color << endl;
    }
};

int main(){
    RoundTable table(0.5,1.0,"red");
    table.show();
}