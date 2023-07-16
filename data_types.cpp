#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/*
    PRN : 22070123087
    Aim : Data types in C++
*/
int main()
{
    int a;
    cout<<"ENTER AN INTEGER : ";
    cin>>a;
    cout<<"INTEGER = "<<a<<endl;

    float b;
    cout<<"ENTER A FLOAT VALUE : ";
    cin>>b;
    cout<<"FLOAT VALUE = "<<b<<endl;

    char c;
    cout<<"ENTER ANY CHARACTER : ";
    cin>>c;
    cout<<"CHARACTER = "<<c<<endl;

    double d;
    cout<<"ENTER A DOUBLE VALUE : ";
    cin>>d;
    cin.ignore();
    cout<<setprecision(10);
    cout<<"DOUBLE VALUE = "<<d<<endl;

    string s;
    cout<<"ENTER ANY STRING : ";
    getline(cin,s);
    cout<<"THE STRING = "<<s<<endl;

    bool e;
    cout<<"ENTER A BOOLEAN VALUE : ";
    cin>>boolalpha;
    cin>>e;
    cout<<boolalpha;
    cout<<"BOOLEAN VALUE = "<<e<<endl;

    return 0;
}
/*OUTPUT
PS D:\C++> ./data_types.exe
ENTER AN INTEGER : 100
INTEGER = 100
ENTER A FLOAT VALUE : 2.0123456789
FLOAT VALUE = 2.01235
ENTER ANY CHARACTER : @
CHARACTER = @
ENTER A DOUBLE VALUE : 2.0123456789
DOUBLE VALUE = 2.012345679
ENTER ANY STRING : Hello World!!
THE STRING = Hello World!!
ENTER A BOOLEAN VALUE : true
BOOLEAN VALUE = true
PS D:\C++>    
*/