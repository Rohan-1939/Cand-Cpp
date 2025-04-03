#include<stdio.h>
int main()
{
    int x,fact=1,*p1,i;
    printf("Enter any number :-\n");
    scanf("%d",&x);
    p1=&x;
    for ( i = 1; i <= *p1; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of the number is :- %d",fact);
}