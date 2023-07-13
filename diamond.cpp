#include<iostream>
using namespace std;
/*
    Name : Priyanshu Singha
    PRN : 22070123087
    AIM : To make a calculator using C++
*/
int main()
{
    int n = 4;
    int c = 7;
    for(int i = 1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= c ; ++j)
        {
            if(j >= (n+1-i) && j <= (n-1+i))
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
    cout<<" ";
    int a = 3;
    int b = (2*a) - 1;
    for(int i =1 ; i <= a ; ++i)
    {
        // cout<<" ";
        for(int j = 1 ; j <= b ; ++j)
        {
            if(j >= i && j <= (b+1-i))
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