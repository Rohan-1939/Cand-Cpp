#include<iostream>
using namespace std;
class rectangle
{
    public:
    double l,b;
    int area();
};
int rectangle::area()
{
    int a;
    cout<<"Enter length and breath of the rectangle"<<endl;
    cin>>l>>b;
    a = l * b;
    return a;
}
int main()
{
    rectangle r;
    int x;
    x = r.area();
    cout << "Area of rectangle is: " << x << endl;
}
