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
    printf("Enter the element you wnat to insert in the array \n");
    scanf("%d", &x);
    printf("Enter the element you position to insert in the array \n");
    scanf("%d", &p);
    for (i = n - 1; i >= p - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[p] = x;
    printf("New arry elements are \n");
    for (i = 0; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }
}