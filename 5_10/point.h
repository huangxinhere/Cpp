class Point{
public:
    Point(int x=0,int y=0) : x(x),y(y) {}
    Point(const Point &p);//??复制对象还是什么？？
    ~Point()              //析构函数，并且希望在对象删除之前执行{}内的命令
    {
        count--;
    }
    //
    int getX() const {
        return x;
    }
    int getY() const
    {
        return y;
    }
    //
    static void showCount();

private:
    int x,y;
    static int count;
};
