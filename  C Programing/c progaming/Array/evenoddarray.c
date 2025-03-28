#include<stdio.h>
int main()
{
    int a[100],i,cnt1=0,cnt2=0,n;
    printf("Enter number of elements you want in the array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    printf("Total even numbers in the array are: %d\n",cnt1);
    printf("Total odd numbers in the array are: %d\n",cnt2);
}