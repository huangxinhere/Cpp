#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/*---类---*/

class Node
{
private:
    int x,y,z;
public:
    Node(int x, int y, int z);
    int getX(){return x;};
    int getY(){return y;};
    int getZ(){return z;};
};

Node::Node(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

class Face
{
private:
    Node node1,node2,node3;
    string num;
    int color[3];
public:
    Face(string num, int *colour, int x1,int y1,int z1,
                    int x2,int y2,int z2,
                    int x3,int y3,int z3):
        node1(x1,y1,z1),node2(x2,y2,z2),node3(x3,y3,z3){ //类的组合:内嵌对象的构造函数,要严格按照格式...
        this->num = num;
        memcpy(color,colour,sizeof(color));              //数组要一一赋值或用函数，不能粗暴地赋地址
    };
    void PrintFront();
    void PrintNode(int n);
    Node getNode(){
        return node1;
    }
};

void Face::PrintFront(){
    cout << "The num is: " << num << "\nthe color is: R(" << color[0]<< "),G(" << color[1] << "),B(" << color[2] << ")"<<endl;
}
void Face::PrintNode(int n){
    PrintFront();
    switch (n)
    {
    case 1:
        cout << "The No.1 node is: " << node1.getX() <<","<< node1.getY() <<"," << node1.getZ();
        break;
    case 2:
        cout << "The No.2 node is: " << node2.getX() <<","<< node2.getY() <<"," << node2.getZ();
        break;
    default:
        cout << "The No.3 node is: " << node3.getX() <<","<< node3.getY() <<"," << node3.getZ();
    }
}

/*---测试---*/

int main(){
    string num = "001";
    int n;
    int color[] = {255,255,255};
    Face face(num,color,0,0,0,1,1,1,2,2,2);

    face.getNode().getX();
    

    cout << "Which node do you want to know? Input(1/2/3):"<<endl;
    cin >> n ;
    face.PrintNode(n);

    return 0;
}