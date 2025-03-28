#include<stdio.h>
int main()
{
    float a,b,add,sub,mult,div;
    int ch;
    printf("Enter any two numbers \n");
    scanf("%f%f",&a,&b);
    printf("1:Addition\n2:Substraction\n3:Multiplication\n4:Division\n");
    printf("which Operation you want to perform?/n Please enter your choice.\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        add = a + b;
        printf("Addition of two number is :- %.2f",add);
        break;
    case 2:
        sub = a - b;
        printf("Substration of two number is :- %.2f",sub);
        break;
    case 3:
        mult = a * b;
        printf("Multiplication of two number is :- %.2f",mult);
        break;
    case 4:
        div = a / b;
        printf("Addition of two number is :- %.2f",div);
        break;
    default:
        printf("please enter correct choice");
        break;
    }
}