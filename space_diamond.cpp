#include<iostream>
using namespace std;
/*
    PRN : 22070123087
    AIM : To make a diamond star pattern
*/
int main()
{
    int n = 4;
    int c = 7;
    for(int i = 1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= c ; ++j)
        {
            if(j > (n+1-i) && j < (n-1+i))
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int a = 4;
    int b = (2*a) - 1;
    for(int i =1 ; i <= a ; ++i)
    {
        // cout<<" ";
        for(int j = 1 ; j <= b ; ++j)
        {
            if(j > i && j < (b+1-i))
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
                // cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
OUTPUT
PS D:\C++\Patterns> ./space_diamond
*******
*** ***
**   **
*     *
*     *
**   **
*** ***
*******
PS D:\C++\Patterns>
*/