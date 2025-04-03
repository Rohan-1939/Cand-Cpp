#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],b[10],x[10];
    printf("Enter first string\n");
    gets(a);
    printf("Enter second string\n");
    gets(b);
    printf("Length of first string is: %d\n",strlen(a));
    printf("Length of second string is: %d\n",strlen(b));
    printf("First string in uppercase letters is: %s\n",strupr(a));
    printf("Second string in uppercase letters is: %s\n",strupr(b));
    printf("First string in lowercase letters is: %s\n",strlwr(a));
    printf("Second string in lowercase letters is: %s\n",strlwr(b));
    //printf("Concatenation of two strings is: %s\n",strcat(a,b));
    //printf("First string in reverse is: %s\n",strrev(a));
    //printf("Second string in reverse is: %s\n",strrev(b));
    /*if(strcmp(a,b)==0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }*/
    printf("Copied string is: %s\n",strcpy(a,b));
    printf("String in x is: %s\n",strcpy(x,"Education"));

}