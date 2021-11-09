#include <iostream>
using namespace std;

class Book
{
private:
    string name;
    string author;
    int pages;
    float price;
public:
Book(string name, string author, int pages, float price);
Book(string name, string author);
Book();
~Book();
};

Book::Book(string name, string author, int pages, float price)
{
    this->name = name;
    this->author = author;
    this->pages = pages;
    this->price = price;
    cout << "Book " << name << ", author: " << author << ", pages: " << pages << ", price: " << price << endl;
}
Book::Book(string name, string author){
    this->name = name;
    this->author = author;
    cout << "Book " << name << ", author: " << author << endl;
}
Book::Book(){
    cout << "A new object is already created!!" << endl;
}
Book::~Book()
{
    cout << "Book " << name << " is destroied!!" << endl;
}

void func(){
    Book a("A","Tom",100,100);
    Book b("B","John");
    Book c; //和Book c();有区别，后者好像是默认构造函数
}

int main(){
    func();
    return 0;
}