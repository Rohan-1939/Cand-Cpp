#include<iostream>
using namespace std;
class rectangle
{
    public:
    int area(int , int);
};
int rectangle::area(int l, int b)
{  
    int a;
    a=l*b;
    printf("Area of the rectangle is %d",a);
}
int main()
{
    rectangle r;
    int e,f;
    cout<<"Enter lenght and breath of the rectangle :- "<<endl;
    cin>>e>>f;
    r.area(e,f);
}