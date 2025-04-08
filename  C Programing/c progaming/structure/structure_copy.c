#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    char name[15];
    char city[10];
};

int main()
{
    struct employee e1 = {101, "Rohan", "Pune"};
    struct employee e2, e3;

    // Copy e1 to e2
    e2.id = e1.id;
    strcpy(e2.name, e1.name);
    strcpy(e2.city, e1.city);

    // Copy e1 to e3
    e3.id = e1.id;
    strcpy(e3.name, e1.name);
    strcpy(e3.city, e1.city);

    printf("Detail of first employee\n");
    printf("Id is %d\t Name:- %s\t City is %s\n", e1.id, e1.name, e1.city);

    printf("Detail of second employee\n");
    printf("Id is %d\t Name:- %s\t City is %s\n", e2.id, e2.name, e2.city);

    printf("Detail of third employee\n");
    printf("Id is %d\t Name:- %s\t City is %s\n", e3.id, e3.name, e3.city);

    return 0;
}
