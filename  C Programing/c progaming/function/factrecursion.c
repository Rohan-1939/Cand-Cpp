#include<stdio.h>
int factorial(int n)
{
    int fact =1;
    if(n==1)
    {
        return 1;
    }
    else
    {
        fact = n * factorial(n-1);
        return fact;
    }
}
int main()
{   
    int a;
    printf("Enter any number :- ");
    scanf("%d",&a);
    printf("factorial of the %d is %d",a,factorial(a));
}
