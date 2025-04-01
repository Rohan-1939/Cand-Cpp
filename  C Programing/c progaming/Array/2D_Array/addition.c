#include <stdio.h>
int main()
{
    int a[3][5],b[3][5],c[3][5], i, j;
    printf("Enter first array element ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter secound array element ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Enter secound array element ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addtion of the Array element are \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

}
