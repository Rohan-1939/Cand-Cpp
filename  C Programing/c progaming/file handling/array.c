#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp=fopen("userr.dat","w");
    char a[5]=[10,20,30,40,50];
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
    fp=fopen("userr.dat","r");
    while (fread(&a,sizeof(struct user),1,fp))
    {
        printf("%d\t%s\t%s\n",a.id,a.name,a.city);
    }
}
