#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Number :=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the greatest number",a);
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            printf("%d is the greatest number",b);
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            printf("%d is the greatest number",c);
        }
    }
    if(b==a)
    {
        if(b>c)
        {
            printf("%d and %d are the greater than the %d",a,b,c);
        }
    }
    if(b==c)
    {
        if(b>a)
        {
            printf("%d and %d are the greater than the %d",c,b,a);
        }
    }
    if(c==a)
    {
        if(c>b)
        {
            printf("%d and %d are the greater than the %d",a,c,b);
        }
    }
    if(b==a)
    {
        if(a==c)
        {
            printf("All Number are equal");
        }
    }
}