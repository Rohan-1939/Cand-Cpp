#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5}, i;
    float b[5] = {1.2, 2.2, 3.2, 4.2, 5.2};
    char c[6] = {'A', 'B', 'C', 'D', 'E'};
    printf("Value of the integer array are \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Value of the float array are \n");
    for (i = 0; i < 5; i++)
    {
        printf("%f\n", b[i]);
    }
    printf("Value of the character array are \n");
    for (i = 0; i < 5; i++)
    {
        printf("%c", c[i]);
    }
}