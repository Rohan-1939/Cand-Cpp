#include<stdio.h>
#include<stdlib.h>
struct user
{
    int id;
     char name[20];
     char city[20];
};
void main()
{
    FILE *fp;
    fp=fopen("user.dat","w");
    struct user a = {101,"abc","Pune"};
    struct user b = {102,"xyz","Mumbai"};
    fwrite(&a,sizeof(struct user),1,fp);
    fwrite(&b,sizeof(struct user),1,fp);
    if(fwrite!=0)
    {
        printf("Successfully written Contents to the file. \n");
    }
    else
    {
        printf("Error in writing the contents. \n");
    }
    fclose(fp);
    printf("File contents are \n");
    fp=fopen("user.dat","r");
    while (fread(&a,sizeof(struct user),1,fp))
    {
        printf("%d\t%s\t%s\n",a.id,a.name,a.city);
    }
}
