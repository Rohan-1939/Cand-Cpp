
#include <stdio.h>
void main()
{
    int i, j, a[10], element, found=0;
    printf("Enter any number in array only 5");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter any number you want to search");
    scanf("%d", &element);
    for (i = 0; i < 5; i++)
    {
        if (element == a[i])
        {
            printf("Enter element is present at %d position \n", i);
            found=1;
            break;
        }
    }
    if (found==0)
    {
        printf("Element not found in the array.\n");

    }
}