#include<stdio.h>
int add(int n)
{
    int fact =0;
    if(n==1)
    {
        return 1;
    }
    else
    {
        fact = n + add(n-1);
        return fact;
    }
}
int main()
{   
    int a;
    printf("Enter any number :- ");
    scanf("%d",&a);
    printf("addition first %d number is %d",a,add(a));
}
