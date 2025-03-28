#include<stdio.h>
int main()
{
    int a,b=0,i;
    printf("Enter any number :- ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b+=i;
    }
    printf("Sum of first %d number are %d",a,b);

}