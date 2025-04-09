#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int c = 0, l = 0, b = 0, t = 0;
    fp = fopen("add10.c", "r");
    while (ch != EOF)
    {
        ch = fgetc(fp);
        if (ch != NULL)
        {
            c++;
        }
        if (ch == '\n')
        {
            l++;
        }
        if (ch == ' ')
        {
            b++;
        }
        if (ch == '\t')
        {
            t++;
        }
    }
    printf("Number of charcters in the file are : %d\n", c);
    printf("Number of New line in the file are : %d \n", l);
    printf("Number of Blank space in the file are : %d \n", b);
    printf("Number of Tab's in the file are : %d \n", t);
}