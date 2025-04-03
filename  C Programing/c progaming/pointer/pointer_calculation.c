#include<stdio.h>
int main()
{
    float x,y,add,sub,mult,div,*p1,*p2;
    printf("Enter Two number :-\n");
    scanf("%f%f",&x,&y);
    p1=&x;
    p2=&y;
    add=(*p1)+(*p2);
    sub=(*p1)-(*p2);
    mult=(*p1)*(*p2);
    div=(*p1)/(*p2);
    printf("Addition of the two number is %.2f \n",add);
    printf("subtraction of the two number is %.2f \n",sub);
    printf("multiplication of the two number is %.2f\n",mult);
    printf("division of the two number is %.2f\n",div);
}