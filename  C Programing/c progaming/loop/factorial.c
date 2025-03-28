#include<stdio.h>
int main()
{
    int a,i,f=1,b=1,j;
    printf("Enter a number \n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        f *= i;
    }
    for(j=a;j>=1;j--)
    {
        b*=j;
    }

    printf("factorial of %d is %d \n",a,f);
    printf("factorial of %d is %d",a,b);

}