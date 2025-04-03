#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[10], b[10];
    printf("Enter first string\n");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if (strcmp(a, b) == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }
}
