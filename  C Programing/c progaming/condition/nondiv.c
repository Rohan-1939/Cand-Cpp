#include<stdio.h>
int main(){
    char x;
    printf("Enter any charachter to check weather it is a vovel or not:-");
    scanf("%c",&x);
    switch (x)
    {
    case 'a':
        printf("%c is a vovel",x);
        break;
    case 'e':
        printf("%c is a vovel",x);
        break;
    case 'i':
        printf("%c is a vovel",x);
        break;
    case 'o':
        printf("%c is a vovel",x);
        break;
    case 'u':
        printf("%c is a vovel",x);
        break;
    case 'A':
        printf("%c is a vovel",x);
        break;
    case 'E':
        printf("%c is a vovel",x);
        break;
    case 'I':
        printf("%c is a vovel",x);
        break;
    case 'O':
        printf("%c is a vovel",x);
        break;
    case 'U':
        printf("%c is a vovel",x);
        break;
    
    default:
        printf("Enter charachter is not vovel ");
        break;
    }
}