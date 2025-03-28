#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter a Number :-");
    scanf("%d",&n);
    if( i==0 || i==1)
    {
        flag=1;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag =1;
            break;
        }
    }
    if (flag==0)
    {
        printf("%d is a prime number",n);
    }
    if (flag==1)
    {
        printf("%d is a not a prime number",n);
    }
    
}