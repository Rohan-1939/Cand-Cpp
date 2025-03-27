#include<stdio.h>
void area();
int main()
{
    area();
}
void area()
{
    int l,b,a;
    printf("Enter lenght and breath of the rectangle :- ");
    scanf("%d%d",&l,&b);
    a=l*b;
    printf("Area of the rectangle is %d",a);
}