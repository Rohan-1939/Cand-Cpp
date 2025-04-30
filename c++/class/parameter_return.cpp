#include<iostream>
using namespace std;
class rectangle
{
public:
    int area(int, int);
};
int rectangle::area(int l, int b)
{
    int a;
    a = l * b;
    return a;
}
int main()
{
    rectangle r;
    int e, f, a;
    cout << "Enter length and breath of the rectangle :- " << endl;
    cin >> e >> f;
    a = r.area(e, f);
    cout << "Area of the rectangle is " << a << endl; 
}
