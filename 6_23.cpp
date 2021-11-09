#include <iostream>
#include <string.h>

/*test for class string*/

using namespace std;

inline void test(const char *c, bool value){
    cout << c << " return : " << (value? "True":"False") << endl; 
}

int main(){
    string s1 = "DEF";
    cout << "s1: " << s1 << endl;
    string s2;

    cout << "Please input s2:\n";
    cin >> s2;
    cout << "length of s2: " << s2.length() << endl;

    test("s1 <= \"ABC\"", s1 <= "ABC");
    test("s1 >= \"DEF\"", s1 >= "DEF");

    s2 += s1;
    cout << "s2 += s1: " << s2 <<endl;
    cout << "length of s2: " << s2.length() << endl;


}