#include <stdio.h>
void change(int *, int *);
int main()
{
    int a, b;
    printf("Enter Two value \n");
    scanf("%d%d", &a, &b);
    printf("value before the swapping is \n a = %d \n b = %d",a,b);
    change(&a,&b);
    printf("\nvalue after the swapping is \n a = %d \n b = %d",a,b);
}
void change(int *x, int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}