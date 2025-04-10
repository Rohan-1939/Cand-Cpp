#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    char ch = 1; 
    fp1 = fopen("add10.c", "r");
    fp2 = fopen("add.c", "w");
    while (ch != 0)
    {
        ch = fgetc(fp1);
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
}
