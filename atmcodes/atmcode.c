#include<stdio.h>

int main()
{
    float x, y;
    char ch;

    printf("Enter Amount in Account\n");
    scanf("%f", &x);

    printf("Press \nc for credit \nd for debit \nb for balance\n");
    scanf("\n%c", &ch);

    switch(ch)
    {
        case 'c':
        printf("Enter credit amount\n");
        scanf("%f", &y);
        x = x + y;

        printf("new amount is %f", x);
        break;
        
        case 'd':
        printf("Enter debit amount\n");
        scanf("%f", &y);
        if(x >= y)
        {
            x = x - y;
            printf("new amount is %f", x);
        }

        else
        {
            printf("You Have Insufficient Funds");
        }
        break;

        case 3:
        printf("Account Balance is %f", x);
        break;

        default:
        printf("Please, choose correct option for operation");
    }
}