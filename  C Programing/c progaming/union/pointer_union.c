#include<stdio.h>
union stud
{
    int rno;
    char name[20];
    char city[20];
}s;
void main()
{
    union stud *p;
    p=&s;
    printf("Enter Student roll no. :- ");
    scanf("%d",&p->rno);
    printf("Student roll no. is :- %d ",p->rno);
    printf("Enter Student Name :- ");
    scanf("%s",&p->name);
    printf("Student Name is :- %s ",p->name);
    printf("Enter Student City :- ");
    scanf("%s",&p->city);
    printf("Student City is :- %s ",p->city);
}

