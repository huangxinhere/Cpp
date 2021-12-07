#include<iostream>
using namespace std;

class Vehicle{
private:
    int wheels;
    float weight;
public:
    Vehicle(int wheels,int w):wheels(wheels),weight(w){
        cout << "Constructing Vehicle: wheels-" << wheels << ", weight-" << weight << endl;
    }
    ~Vehicle(){
        cout << "Destructing Vehicle" << endl;
    }
};
class Car: public Vehicle{
private:
    int passenger;
public:
    Car(int wheels,int w,int num):Vehicle(wheels,w),passenger(num){
        cout << "Constructing Car: passenger-" << passenger << endl;
    }
    ~Car(){
        cout << "Destructing Car" << endl;
    }
};
class Truck: public Vehicle{
private:
    int passenger;
    float payload;
public:
    Truck(int wheels,int w,int p,float load):Vehicle(wheels,w),passenger(p),payload(load){
        cout << "Constructing Truck: passenger-" << passenger << ", payload-" << payload << endl;
    }
    ~Truck(){
        cout << "Destructing Truck" << endl;
    }
};

int main(){
    Truck truck(6,200,3,1000);
    Car car(4,100,4);
    return 0;
}