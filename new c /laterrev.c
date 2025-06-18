#include <stdio.h>
int main()
{
    int num = 123, rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("%d", rev);
}