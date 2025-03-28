#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter array elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Addition of array elements is: %d",sum);
}