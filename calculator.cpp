#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
float add();
float sub();
float mul();
float div();
int mod();
int main()
{
    int c = 1;
    char ch;
    cin>>ch;
    while(c == 1)
    {
        cout << "\033[2J\033[1;1H";
        cout<<"PRESS + TO ADD"<<endl<<"PRESS - TO SUBTRACT"<<endl<<"PRESS X TO MULTIPLY"<<endl<<"PRESS / TO DIVIDE"<<endl<<"PRESS % TO FIND REMAINDER"<<endl<<"ENTER CHOICE"<<endl;
        cin>>ch;
        cout<<setprecision(10);
        switch(ch)
        {
            case '+':
                cout<<"SUM = "<<add()<<endl;
                break;
            case '-':
                cout<<"DIFF = "<<sub()<<endl;
                break;
            case '*':
                cout<<"PRODUCT = "<<mul()<<endl;
                break;
            case '/':
                cout<<"QUOTIENT = "<<div()<<endl;
                break;
            case '%':
                cout<<"REMAINDER = "<<mod()<<endl;
                break;
            default:
                cout<<"INVALID INPUT"<<endl;
                break;
        }
        cout<<"DO YOU WANT TO CONTINUE(1/0)?"<<endl;
        cin>>c;
    }
    return 0;
}
float add()
{
    cin.precision(4);
    float a , b;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin.precision(5);
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin.precision(5);
    cin>>b;
    return (a + b);
}
float sub()
{
    float a , b;
    cin.precision(4);
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>b;
    return a - b;
}
float mul()
{
    cin.precision(4);
    float a , b;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>b;
    return a * b;
}
float div()
{
    float a , b;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>b;
    return a / b;
}
int mod()
{
    int a , b;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>b;
    return a % b;
}