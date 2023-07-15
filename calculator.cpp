#include<iostream>
#include<iomanip>
/*
    PRN : 22070123087
    AIM : To make a calculator using C++
*/
using namespace std;
float add();
float sub();
float mul();
float div();
int mod();
int count = 0;
char menu();
int main()
{
    int c = 1;
    char ch;
    while(c == 1)
    {
        cout << "\033[2J\033[1;1H";//Clearing the output Screen
        ch = menu();
        cout<<setprecision(4);
        switch(ch)
        {
            case '+':
                cout<<"SUM = "<<add()<<endl;
                break;
            case '-':
                cout<<"DIFF = "<<sub()<<endl;
                break;
            case 'X':
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
char menu()
{
    if(count == 0)
    {
        cout<<"CALCULATOR PROGRAM"<<endl<<endl;
        count++;
    }
    char ch;
    cout<<"PRESS + TO ADD"<<endl<<"PRESS - TO SUBTRACT"<<endl<<"PRESS X TO MULTIPLY"<<endl<<"PRESS / TO DIVIDE"<<endl<<"PRESS % TO FIND REMAINDER"<<endl<<"ENTER CHOICE"<<endl;
    cin>>ch;
    return ch;
}
/*
    OUTPUT:

CALCULATOR PROGRAM

PRESS + TO ADD
PRESS - TO SUBTRACT
PRESS X TO MULTIPLY
PRESS / TO DIVIDE
PRESS % TO FIND REMAINDER
ENTER CHOICE
+
ENTER THE FIRST NUMBER : 10
ENTER THE SECOND NUMBER : 21
SUM = 31
DO YOU WANT TO CONTINUE(1/0)?

PS D:\C++> ./calculator
CALCULATOR PROGRAM

PRESS + TO ADD
PRESS - TO SUBTRACT
PRESS X TO MULTIPLY
PRESS / TO DIVIDE
PRESS % TO FIND REMAINDER
ENTER CHOICE
/
ENTER THE FIRST NUMBER : 21
ENTER THE SECOND NUMBER : 4
QUOTIENT = 5.25
DO YOU WANT TO CONTINUE(1/0)?
0
PS D:\C++>

        
*/