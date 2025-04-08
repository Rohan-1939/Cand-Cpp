#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    char phone[20];
    float marks;
};

int main()
{
    struct student s1;
    printf("Enter student Roll No. \n");
    scanf("%d", &s1.rollno);
    printf("Enter student Name \n");
    scanf("%s", &s1.name);
    printf("Enter student Phone No. \n");
    scanf("%s", &s1.phone);
    printf("Enter student Marks \n");
    scanf("%f", &s1.marks);
    printf("Roll No. of the Student is :- %d\n", s1.rollno);
    printf("Name of the Student is :- %s\n", s1.name);
    printf("Phone No. of the Student is :- %s\n", s1.phone);
    printf("Marks of the Student is :- %0.2f\n", s1.marks);
}
