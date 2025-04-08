#include<stdio.h>
struct books
{
    int id;
    char name[20];
    char author[20];
    float price;    
};
int main()
{
    struct books b[5];
    int i;
    printf("Enter 5 book details \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d%s%s%f",&b[i].id,&b[i].name,&b[i].author,&b[i].price);
    }
    printf("Details of 5 books\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%s\t%f\n",b[i].id,b[i].name,b[i].author,b[i].price);
    }
}
