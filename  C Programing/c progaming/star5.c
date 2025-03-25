#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)   // for the row
    {
        for(j=1;j<=5;j++)    // for the column
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("New star pattern\n");
    for(i=1;i<=5;i++)   // for the row
    {
        for(j=i;j<=5;j++)    // for the column
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("New star pattern \n");
    for(i=5;i>=1;i--)   // for the row
    {
        for(j=i;j<=5;j++)    // for the column
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("New star pattern");
}