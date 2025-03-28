#include<stdio.h>
int main()
{
    int a[7],i,max,min;
    printf("Enter array elements\n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        max=a[0];
        min=a[0];
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Greatest number in the array is: %d\n",max);
    printf("Smallest number in the array is: %d\n",min);
}