#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char name[10];
    char *descirption;
    strcpy(name, "abc");
    descirption = malloc(30 * sizeof(char));
    if(descirption==NULL)
    {
        printf("Unable to allocate required memory \n");
    }
    else
    {
        stpcpy(descirption,"abc is strudent");
    }
    descirption = realloc(descirption, 10 * sizeof(char));
    if(descirption==NULL)
    {
        printf("Unable to allocate required memory \n");
    }
    else
    {
        strcat(descirption,"she is studing");
    }
    printf("Name = %s \n",name);
    printf("Desciption : %s",descirption);
    free(descirption);
}