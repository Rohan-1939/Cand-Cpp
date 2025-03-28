#include<stdio.h>
int main()
{
    int a,b,c,bal=20000;
    printf("Welcome please inter your choice");
    printf("1:Check the balance\n2:Withdraw Money\n3:Deposite Money\n4:EXIT \n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Your current balance is %d",bal);
        break;
    case 2:
        printf("Enter the amount for withdraw :-");
        scanf("%d",&b);
        if(b>bal)
        {
            printf("Your current balance is less then the withdrawl amount");
        }
        if(b<bal)
        {   
            bal -= b;
            printf("Your transation is successful \n current balance is %d",bal);
        }
        break;
    case 3:
        printf("Enter the amount you want to deposit");
        scanf("%d",&c);
        bal +=c;
        printf("Your Transation was successful \n current balance is %d",bal);
    case 4:
        printf("Your have successfully exited");
        break;
    default:
        printf("Please enter correct choice");
        break;
    }
}