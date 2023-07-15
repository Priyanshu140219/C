#include<iostream>
using namespace std;
/*
PRN: 22070123087
Aim : To print Hollow Diamond
*/
int main()
{
    int n = 4 , m = 7;
    for(int i =1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= m ; ++j)
        {
            if(j == (n+1-i) || j == (n-1+i))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    int a = 3 , b = 5;
    cout<<" ";
    for(int i = 1 ; i <= a ; ++i)
    {
        for(int j = 1 ; j <= b ; ++j)
        {
            if(j == i || j == (b+1-i))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        cout<<" ";
    }
    return 0;
}
/*
OUTPUT:

PS D:\C++\Patterns> ./diamond
   *
  ***
 *****
*******
 *****
  ***
   *
*/