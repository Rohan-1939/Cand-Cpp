#include <stdio.h>
union stud_info
{
    int rno;
    char name[20];
    char city[20];
};
union stud_detail
{
    int marks;
    union stud_info s;
};
void main()
{
    union stud_detail y;
    printf("student roll no. :- ");
    scanf("%d", &y.s.rno);
    printf("Roll no. of the Student is :- %d \n", y.s.rno);
    printf("student Name :- ");
    scanf("%s", &y.s.name);
    printf("name of the Student is :- %s\n", y.s.name);
    printf("student City :- ");
    scanf("%s", &y.s.city);
    printf("city of the Student is :- %s\n", y.s.city);
    printf("student marks :- ");
    scanf("%d", &y.marks);
    printf("Marks of the Student is :- %d\n", y.marks);
}
