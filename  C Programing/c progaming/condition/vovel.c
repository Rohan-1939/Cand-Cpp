#include<stdio.h>
int main()
{
    char x;
    printf("Enter any charachter :-");
    scanf("%c",&x);
    if( x =='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    {
        printf("%c is the vovel",x);
    }
    else
    {
        printf("%c is not a vovel",x);
    }
}