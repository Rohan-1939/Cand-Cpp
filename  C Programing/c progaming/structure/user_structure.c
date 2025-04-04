#include<stdio.h>
struct books
{
    int bid;
    char name[15];
    char author[20];
    float price;
};

int main()
{
    struct books b;
    printf("Enter book's ID\n");
    scanf("%d",&b.bid);
    printf("Enter book's Name\n");
    scanf("%s",&b.name);
    printf("Enter book's Author\n");
    scanf("%s",&b.author);
    printf("Enter book's Price\n");
    scanf("%f",&b.price);
    printf("Id of the book is %d\n",b.bid);
    printf("Name of the book is %s\n",b.name);
    printf("Author of the book is %s\n",b.author);
    printf("Price of the book is %.2f\n",b.price);
}
