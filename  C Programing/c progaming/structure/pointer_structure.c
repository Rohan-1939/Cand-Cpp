#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    char city[20];
    char phone[10];
};
void main()
{
    struct employee e1={101,"ROHAN","PUNE","1010101010"};
    struct employee *p1;
    p1 = &e1;
    printf("Id of the employee is :- %d \n",p1->id);
    printf("Name of the employee is :- %s \n",p1->name);
    printf("city of the employee is :- %s \n",p1->city);
    printf("Phone No. of the employee is :- %s \n",p1->phone);
}