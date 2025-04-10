#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    char s[100];
    fp = fopen("sample.c","w");
    printf("Enter content of file \n");
    while (strlen(gets(s))>0)
    {
        fputs(s,fp);
        fputs("\n",fp);
    }
    fclose(fp);
    fp = fopen("sample.c","a");
    printf("Enter some more content to file \n");
    while (strlen(gets(s))>0)
    {
        fputs(s,fp);
        fputs("\n",fp);
    }
    fclose(fp);
    printf("File contents after adding new contents \n");
    fp = fopen("sample.c","r");
    while (fgets(s,99,fp)!=NULL)
    {
        printf("%s",s);
    }
    fclose(fp);
}