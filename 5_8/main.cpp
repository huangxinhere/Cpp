#include <iostream>

using namespace std;

/*---�����ݳ�Ա---*/

class A
{
public:
    A(int a):a(a){}//�����ݱ����ڹ�������ʼ��
    void print()
    {
        cout << "a="<<a<<",b="<<b;
    }
private:
    const int a;
    static const int b;
};

const int A::b = 10;//��̬�����ݳ�Ա����>�����������ͳ�ʼ��

int main()
{
    A a(2);
    a.print();
    return 0;
}
