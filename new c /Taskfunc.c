#include<stdio.h>
int prime(int);
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x!=0&&x!=1)
    {
        prime(x);
    }
    
}
int prime(int a)
{
    int i,r;
    for ( i = 2; i < a; i++)
    {
        if (a % i != 0)
        {
            printf("It is not a prime number");
            break;
        }
        else
        {
            printf("it is a prime number");
        }
    }
}