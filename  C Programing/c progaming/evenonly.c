#include<stdio.h>
int main()
{
    int i;
    printf("First 25 even number \n");
    for(i=1;i<=50;i++)
    {
        if(i%2==0)    //for odd number  if(i%2!=0)
        {
            printf("%d \n",i);
        }
    }
}
