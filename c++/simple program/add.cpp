#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,add,sub,mult,div;
    cout<<"Enter any two number"<<endl;
    cin>>a>>b;
    add=a+b;
    sub=a-b;
    mult=a*b;
    div=a/b;
    cout<<"Additon is :"<<add<<endl;
    cout<<"Subtraction is :"<<sub<<endl;
    cout<<"Multiplication is :"<<mult<<endl;
    cout<<"Division is :"<<div<<setprecision(2)<<endl;
}