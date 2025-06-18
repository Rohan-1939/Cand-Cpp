#include<stdio.h>
int main()
{
    int a,rem;
    printf("Enter any number");
    scanf("%d",&a);
if(a!=0)
{
    if (a%2==0)
    {
        printf("%d is a even number",a);
    }
    else
    {
        printf("%d is a odd number",a);
    }
  }  
  else
  {
    printf("Number should be greater than 0");
  }
}