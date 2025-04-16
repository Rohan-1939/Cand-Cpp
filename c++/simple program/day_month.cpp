#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a number 28 to 31 :- "<<endl;
    cin>>a;
    switch (a)
    {
    case 28:
        printf("February month has 28 days");
        break;
    case 29:
        printf("February month has 29 days in a leap year");
        break;
    case 30:
        printf("April, June, September, November month has 30 days");
        break;
    case 31:
        printf("January, March, May, July, August, October, December month has 31 days");
        break;
    
    default:
        printf("Please enter correct choice");
        break;
    }
}