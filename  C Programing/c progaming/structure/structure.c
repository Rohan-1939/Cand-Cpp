#include <stdio.h>
struct employee
{
    int id;
    char name[15];
    char phone[10];
    float salary;
};

int main()
{
    struct employee e = {101, "ROHAN", "12345", 35000.56};
    
    printf("ID of employee is %d\n", e.id);
    printf("Name of employee is %s\n", e.name);
    printf("Phone No. of employee is %s\n", e.phone);
    printf("Salary of employee is %f\n", e.salary);
}