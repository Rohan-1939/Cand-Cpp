#include<stdio.h>
int main()
{
    int a,rem;
    printf("Enter any number");
    scanf("%d",&a);
    rem = a%2;
    if (rem==0)
    {
        printf("%d is a even number",a);
    }
    else
    {
        printf("%d is a odd number",a);
    }
    
}