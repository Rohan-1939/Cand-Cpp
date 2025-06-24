#include<stdio.h>
int main()
{
    int a = 22;
    int *p1, **p2;
    p1=&a;
    p2=&p1;
    printf("\n address of a : %d",p1);
    printf("\n value of a : %d",*p1);
    printf("\n address of p1 : %d",p2);
    printf("\n value of a : %d",**p2);
}