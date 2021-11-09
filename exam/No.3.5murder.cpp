#include <iostream>

using namespace std;

/*int main(){
    bool m[6] = {true,true,true,true,true,true};
    int a=0,b=0,c=0,d=0,e=0,f=0;
    for ( ; ; )
    {
        if(m[0]||m[1]!=true)            //不符合条件时，更改参数
        {
            a++;
            if(a==1)
                m[0]=true,m[1]=false;   //A
            else if (a==2)
                m[0]=false,m[1]=true;   //B
            else if (a==3)
                m[0]=true,m[1]=true;    //AB
            if(a==3) a=0;               //已尝试3次，重新尝试
        }
    }
    

    return 0;
}*/

int main(){
    bool m[6][2] = {{false,true},{false,true},{false,true},{false,true},{false,true},{false,true}};
    for ( int a = 0 ; a < 2 ; a++)
    {
        for(int b=0;b<2;b++)
        {
            for (int c = 0; c < 2; c++)
            {
                for (int d = 0; d < 2; d++)
                {
                    for (int e = 0; e < 2; e++)
                    {
                        for (int f = 0; f < 2; f++)
                        {
                            if((m[0][a]||m[1][b]==true)&&
                              (m[0][a]||m[4][e]||m[5][f]==true)&&
                              (m[0][a]&&m[3][d]==false)&&
                              (m[1][b]&&m[2][c]==true)&&
                              (m[2][c]&&m[3][d]==false)&&
                              (m[3][d]&&m[4][e]==true))
                              break;

                        }
                        
                    }
                    
                }
                
            }
            
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << m[i] <<"  "<<endl;
    }
    
    return 0;
}