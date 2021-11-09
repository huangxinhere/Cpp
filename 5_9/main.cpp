#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:
    Point(int x=0,int y=0) : x(x),y(y){} //����Ĭ�ϳ�ʼ��
    friend float dist(const Point &p1,const Point &p2); //��Ҫ����friend�����������ʶ����Ա�����ǷǷ��ģ�����������˽�е�
private:
    int x,y;

};

float dist(const Point &p1,const Point &p2)             //�����ã����ö��󲻿ɸ��ģ������������ݣ�
{
    double c = p1.x - p2.x;
    double d = p1.y - p2.y;
    return static_cast<float>(sqrt(c*c+d*d));
}

int main()
{
    Point a(1,1),b(4,5);                                //�����ÿɰ���ͨ�Ķ���򳣶���
    cout << "The distance is : ";
    cout << dist(a,b)<<endl;
    return 0;
}


//�ں���������ı���ֵ�Ĳ�����
//1. ����ʹ����ͨ���ã���ʹ�������޷�������
//2. ��ֵ��ʽ��������ʱ�϶ࣩ
//3. ���ݳ�����
