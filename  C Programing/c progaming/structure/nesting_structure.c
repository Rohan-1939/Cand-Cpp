#include <stdio.h>
struct emp_info
{
    int id;
    char name[20];
    char phone[10];
};
struct emp_detail
{
    char dept[20];
    float salary;
    struct emp_info e1;
};

int main()
{
    struct emp_detail ed;
    printf("Enter employee detail Id, Name, Phone, Deptarment, Salary \n");
    scanf("%d%s%s%s%f", &ed.e1.id, &ed.e1.name, &ed.e1.phone, &ed.dept, &ed.salary);
    printf("%d\t%s\t%s\t%s\t%0.2f\t", ed.e1.id, ed.e1.name, ed.e1.phone, ed.dept, ed.salary);
}