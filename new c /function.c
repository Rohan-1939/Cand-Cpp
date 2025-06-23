#include<stdio.h>
void square();
int circle();
void area(int);
int permeter(int);
int main()
{
    int f=10, r=20;
    square();
    printf("\n circle is %d ",circle());
    area(r);
     printf("\n circle is %d ",permeter(f));
}
void square()
{
    printf("Default function without return type");
}
int circle()
{
    int a =10;
    return a;
}
void area(int x)
{
    printf("\nArea of Square is :- %d",(x*x));
}
int permeter(int y)
{
    return y;
}