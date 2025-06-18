#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your marks");
    scanf("%d",&mark);
    if (mark>=70)
    {
        printf("First class");
    }else
    if (mark>=60 && mark<70)
    {
        printf("second class");
    }else
    if  (mark>=50 && mark<60)
    {
        printf("Third class");
    }else
    if  (mark>=35 && mark<50)
    {
        printf("Pass class");
    }
    else
    {
        printf("fail");
    }

}