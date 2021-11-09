#include <iostream>
using namespace std;

void Bobb(int *a, int len){
    int t;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if(a[j] > a[j+1])
                t = a[j],a[j] = a[j+1], a[j+1] = t;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    
    
}

int main(){
    int a[] = {2,5,9,8,7};
    Bobb(a,sizeof(a)/sizeof(int));
    return 0;
}