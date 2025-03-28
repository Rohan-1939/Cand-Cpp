#include<stdio.h>
int area(int , int);
int main()

{
    printf("Area of the rectangle is %d",area(2,3));
}   
int area(int a, int b)
{
    return a*b;
}