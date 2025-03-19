#include<stdio.h>
int main(){
    float x,y,add,sub,mult,div;
    printf("Enter first number \n");
    scanf("%f", &x);
    printf("Enter second number \n");
    scanf("%f", &y);
    add = x +y;
    sub = x -y;
    div = x/y;
    mult = x *y;
    printf("Addition is : %.2f \n",add);
    printf("Subtractaion of number is : %.2f \n", sub);
    printf("division of number is : %.2f \n", div);
    printf("Multiplcaion of number is : %.2f \n", mult);
}