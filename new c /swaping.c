#include<stdio.h>
int swap(int , int);
int main()
{
    int e =2 ,b=3;
    swap(e,b);
}
int swap( int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    printf("after swaping \n a = %d  \n b = %d",a,b);
    return 0;
}


