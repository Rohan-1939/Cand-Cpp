#include <stdio.h>
int main()
{
    int arr[5] = {2, 7, 4, 9, 6};
    int i, count = 0;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    printf("Total even numbers = %d\n", count);
    return 0;
}