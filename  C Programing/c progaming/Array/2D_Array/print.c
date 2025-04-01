#include <stdio.h>
int main()
{
    int a[3][5], i, j;
    printf("Enter array element ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Array element are \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
}