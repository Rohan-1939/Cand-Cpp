#include<stdio.h>
void area(int ,int);
int main()
{   
    int e,f;
    printf("Enter lenght and breath of the rectangle :- ");
    scanf("%d%d",&e,&f);
    area(e,f);
}
void area(int l, int b)
{
    int a;
    a=l*b;
    printf("Area of the rectangle is %d",a);
}