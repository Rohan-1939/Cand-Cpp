
#include <stdio.h>
void main()
{
    int i, j, a[10], element, found=0;
    printf("Enter any number in array only 5 \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Enter any number you want to search ");
    scanf("%d", &element);
    for (i = 0; i < 5; i++)
    { 
        if (element == a[i])
        {
            printf("Enter element is present at %d position \n", i+1);
            found=1;
            break;
        }
    }
    if (found==0)
    {
        printf("Element not found in the array.\n");

    }
}