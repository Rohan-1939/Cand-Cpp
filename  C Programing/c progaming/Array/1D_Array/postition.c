#include <stdio.h>

int main() {
    int i, a[10], element, found = 0;

    printf("Enter any number in array (only 5 values):\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);  
    }

    printf("Enter any number you want to search: ");
    scanf("%d", &element);

    for (i = 0; i < 5; i++) {
        if (element == a[i]) {
            printf("Entered element is present at position %d\n", i + 1);
            found = 1; 
            break;  
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
