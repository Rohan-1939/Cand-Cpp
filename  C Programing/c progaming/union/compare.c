#include <stdio.h>
union a1
{
    int x1;
    char x2[20];
};
struct a2
{
    int y1;
    char y2[20];
};
union a3
{
    int x3;
    float x4;
};
struct a4
{
    int y3;
    float y4;
};
union a5
{
    char x5[20];
    float x6;
};
struct a6
{
    char y5[20];
    float y6;
};
union a7
{
    int x7[20];
    char x8[10];
};
struct a8
{
    int y7[20];
    char y8[10];
};

void main()
{
    union a1 a;
    struct a2 b;
    union a3 c;
    struct a4 d;
    union a5 e;
    struct a6 f;
    union a7 g;
    struct a8 h;
    printf("Size of the union a1 is :- %d \n",sizeof(a));
    printf("Size of the struct a2 is :- %d \n",sizeof(b));
    printf("Size of the union a3 is :- %d \n",sizeof(c));
    printf("Size of the struct a4 is :- %d \n",sizeof(d));
    printf("Size of the union a5 is :- %d \n",sizeof(e));
    printf("Size of the struct a6 is :- %d \n",sizeof(f));
    printf("Size of the union a7 is :- %d \n",sizeof(g));
    printf("Size of the struct a8 is :- %d \n",sizeof(h));
}