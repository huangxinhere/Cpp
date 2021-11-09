#include<iostream>
#include"Circle.cpp"

//优化：常数据初始化
const float FENCE_PRICE = 35;
const float CONCRETE_PRICE = 20;

using namespace std;

float roadFee(float x){
    return x*20;
}

float aroundFee(float y){
    return y*35;
}

int main(){
    Circle a;
    a.setCircle();
    cout << "The roadFee is " << roadFee(a.roadArea()) << endl;
    cout << "The aroundFee is " << aroundFee(a.around()) << endl;
    return 0;
}