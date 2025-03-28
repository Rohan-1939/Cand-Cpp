#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the greatest number",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the greatest number",b);
    }
    else if(c>a && c>b)
    {
        printf("%d is the greatest number",c);
    }
    else if(a==b && a>c)
    {
        printf("%d and %d are the greatest number",a,b);
    }
    else if(c==b && b>a)
    {
        printf("%d and %d are the greatest number",c,b);
    }
    else if(a==c && a>b)
    {
        printf("%d and %d are the greatest number",a,c);
    }
    else
    {
        printf("All number are equal");
    }

}