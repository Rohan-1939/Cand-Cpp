#include<stdio.h>
int main()
{
    char x;
    printf("Enter any charachter :-");
    scanf("%c",&x);
    if( x=="a" || x=="e" || x=="i" || x=="o" || x=="u" )
    {
        printf("%c is the vovel",x);
    }
    else
    {
        printf("%c is not a vovel",x);
    }
}