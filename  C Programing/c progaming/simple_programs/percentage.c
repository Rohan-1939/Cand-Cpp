#include<stdio.h>
int main()
{
    int a,b,c,d,e,percentage,total,sum;
    printf("Enter marks of your five subject :-");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+e+d;
    percentage = sum*100/500;
    printf("You got %d percentage in the exam",percentage);
}