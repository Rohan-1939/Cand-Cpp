#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    char name[10];
    char *d;
    strcpy(name, "abc");
    d = malloc(20 * sizeof(char));
    if(d == NULL)
    {
        printf("Uable to aloate required memory");
    }
    else
    {
        strcpy(d,"abc os a student.");
    }
    printf("Name =%s\n",name);
    printf("Desciption : %s\n",d);
    return 0;
}
