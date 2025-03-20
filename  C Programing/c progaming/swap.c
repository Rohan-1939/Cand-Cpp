#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number :-");
    scanf("%d%d",&a,&b);
    printf("Before the swaping value of a is %d and the value of b is %d \n",a,b);
    c = a;
    a = b;
    b = c;
    printf("After the swaping value of a is %d and the value of b is %d",a,b);
}