#include <stdio.h>
#include <conio.h>
long amount=334500, withdraw;
int choice;
int k,pin;
char transaction = 'y';

void main()
{
    printf("Welcome!\n");
    printf("Please Insert Your Card\n");
    printf("Hi,Please do not Remove your Chip Card.\n");
    printf("Leave your Card Inserted during the Entire Transaction\n");
    while (pin != 1234)
    {
        printf("ENTER YOUR SECRET PIN NUMBER :\n");
        scanf("%d",&pin);
        if(pin != 1234)
        printf("PLEASE ENTER YOUR VALID PASSWORD\n :");
        
    }
    do
    {
        printf("*****Welcome To Our ATM Service*******\n");
        printf("1. Check Balance\n");
        printf("2. Withdrawal Cash\n");
        printf("3. Quit\n");
        printf("***************************\n\n");
        printf("Enter your choice:  ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
            printf("\n YOUR BALANCE IN Rs : %lu ",amount);
            break;

            case 2:
            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%lu", &withdraw);
            printf("\n(Cash Available : Rs 100,Rs 500,Rs 200,Rs 2000)");
            if (withdraw % 100 != 0)
            { 
                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                
            }
            else if (withdraw >(amount - 500))
            {
                printf("\n INSUFFICIENT BALANCE");
                
            }
            else
            {
                amount = amount - withdraw;
                printf("\n\n PLEASE COLLECT CASH");
                printf("\n YOUR CURRENT BALANCE IS %lu \n", amount);
                
            }
            break;

            case 3:
            printf("\n THANK YOU FOR USING OUR ATM");
            break;

            default:
            printf("\n INVALID CHOICE ");
            
        }
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
        k = 1;
        
    }
    while (!k);
    printf("\n\n THANKS FOR USING OUR ATM SERVICE\n");
    getch();
}