#include<stdio.h>
int area();
int main()
{
    printf("area of the rectangle is %d",area());
}
int area()
{
    int l,b,a;
    printf("Enter lenght and breath of the rectangle :- ");
    scanf("%d%d",&l,&b);
    a=l*b;
    return a;
}