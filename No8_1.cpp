#include <iostream>
using namespace std;

class Box{
private:
    float width, height;
public:
    Box(float w=0, float h=0):width(w),height(h){
        cout << "Box init here: " << w << ", " << h << endl;
    }
    void initBox(float w, float h){
        width = w, height = h;
    }
    void show(){
        cout << "width and legth:" << width << ", height:" << height ;
    }
};

class ColoredBox: public Box{
private:
    string colour;
public:
    ColoredBox(float w, float h, string c):Box(w,h),colour(c){
        cout << "ColorBox init here: " << w << "," << h << "," << colour << endl;
    }
    void initColoredBox(float w,float h,string c){
        Box::initBox(w,h);
        colour = c;
    }
    void show(){
        cout << "\nColoredBox: " << endl;
        Box::show();
        cout << ", colour:" << colour << endl; 
    }
};

/*采用函数传参的方法进行向上转换*/
void func(Box *box){
    box->show();
}

int main(){
    Box box(10,100);
    ColoredBox colorbox(20,200,"blue");

    //box.initBox(10,100);
    //colorbox.initColoredBox(20,200,"blue");

    cout << "Box:" << endl;
    box.show();
    colorbox.show();

    cout << "Box:" << endl;
    func(&colorbox);

    return 0;
}