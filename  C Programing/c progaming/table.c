#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter any number");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        j = i*a;
        printf("%d \n",j);
    }
}
