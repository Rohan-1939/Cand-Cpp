#include <stdio.h>
void faba(int);
int main()
{
    int g=6;
    faba(g);
    return 0;
}
void faba(int x)
{   
    
    int a = 0, b =1, c,i;
    for ( i = i; i < x; i++)
    {
         printf("\n %d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    
}
