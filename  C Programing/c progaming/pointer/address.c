#include<stdio.h>
int main()
{
    int x =105;
    int *p;
    p=&x;
    printf("Value of varible is : %d\n",x);
    printf("Value of varible is : %d\n",*p);
    printf("address of varible is : %d\n",p);
    printf("address of varible is : %d\n",&x);
    printf("address of varible is : %d\n",&p);
}