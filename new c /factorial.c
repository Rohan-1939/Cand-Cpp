#include<stdio.h>
int main()
{
    int i,a,fact=1;
    printf("Enter a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact*=i;
    }
    printf("factorial of the number is %d",fact);
}