#include<stdio.h>
void area();
int area1();
int area2(int , int);
int area3(int , int);
int main()
{
    int x,y;
    area();
    printf("Area of the rectangle is %d",area1());    
    scanf("%d%d",&x,&y);
    printf("Area of the rectangle is %d",area2(x,y));
    printf("Area of the rectangle is %d",area3(x,y));
}
void area()
{
    int l,b,a;
    printf("Enter lenght and breath of the rectangle :- ");
    scanf("%d%d",&l,&b);
    a=l*b;
    printf("Area of the rectangle is %d \n",a);
}
int area1()
{
    int l,b,a;
    printf("Enter lenght and breath of the rectangle :- ");
    scanf("%d%d",&l,&b);
    a=l*b;
    return a;
}
int area2(int a, int b)
{
    int c;
    c=a*b;
    printf("Area of the rectangle is %d \n",c);
}
int area3(int a, int b)
{
    int d;
    d=a*b;
    return d;
}