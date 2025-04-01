#include <stdio.h>
int main()
{
    int a[50], i, n, x, l, p;
    printf("Enter how may elements you wnat in the array \n");
    scanf("%d", &n);
    printf("Enter array element \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the positon form where you wnat to delete element \n");
    scanf("%d", &p);
    for (i = p - 1; i <= n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    printf("New arry elements are \n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d\n", a[i]);
    }
}