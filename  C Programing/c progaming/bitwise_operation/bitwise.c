#include<stdio.h>
int main()
{
    unsigned char a=4, b=5;
    printf("Result of bitwise AND operation is: %d\n",a&b);
    printf("Result of bitwise OR operation is: %d\n",a|b);
    printf("Result of bitwise XOR operation is: %d\n",a^b);
    printf("Result of bitwise NOT operation is: %d\n",~a);
    printf("Result of bitwise NOT operation is: %d\n",~b);
    printf("Result of bitwise Left shift operation is: %d\n",a<<1);
    printf("Result of bitwise Right shift operation is: %d\n",b<<1);
    printf("Result of bitwise Left shift operation is: %d\n",a>>1);
    printf("Result of bitwise Left shift operation is: %d\n",b>>1);
}