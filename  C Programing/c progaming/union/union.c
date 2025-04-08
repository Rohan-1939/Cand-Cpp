#include <stdio.h>
union student
{
    int rno;
    char name[20];
};
void main()
{
    union student s1;
    printf("Enter roll no. \n");
    scanf("%d", &s1.rno);
    printf("Roll No. of the student is :- %d \n", s1.rno);
    printf("Enter Name \n");
    scanf("%s", &s1.name);
    printf("Roll No. of the student is :- %s \n", s1.name);
}