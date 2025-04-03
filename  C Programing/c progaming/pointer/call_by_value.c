#include <stdio.h>
void change(int, int);
int main()
{
    int x,y;
    printf("Enter Two value\n");
    scanf("%d%d",&x,&y);
    printf("value of x is %d and value of the y is %d before swapping\n",x,y);
    change(x,y);
    printf("value of x is %d and value of the y is %d after swapping \n",x,y);
}
void change(int a, int b)
{
    int t;
    t =a;
    a=b;
    b=t;
}