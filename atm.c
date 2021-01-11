#include <stdio.h>
int withdraw(int p, int cash);
int check(int p, int cash);
void main()
{
    char choice;
    int savedpin = 2000;
    float presentcash = 20000;
    printf("PLEASE INSERT YOUR CARD IN THE SLOT BELOW :\n");
    printf("Enter the mode of transaction ( withdraw = w ,check = c ) :\n");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'w':
        withdraw(savedpin, presentcash);
        break;
    case 'c':
        check(savedpin, presentcash);
        break;
    }
}
int withdraw(int p, int cash)
{
    int pin, i;
    float amount, remaining;
    for (i = 0; i < 3; i--)
    {
        printf("Enter the pin of the ID :\n");
        scanf("%d", &pin);
        if (pin == p)
            break;
        else
            printf("The pin you've entered is wrong please enter again :\n");
    }
    if (pin == p)
    {
        printf("Enter the amount :\nINR ");
        scanf("%f", &amount);
        remaining = cash - amount;
        if (remaining >= 0)
        {
            printf("Please collect your cash :\n");
            printf("The remaining amount is %f INR", remaining);
        }
        else
            printf("There is insufficient amount of balance in your account :\n");
        return 0;
    }
}
int check(int p, int cash)
{
    int pin, i;
    for (i = 0; i < 3; i--)
    {
        printf("Enter the pin of the ID :\n");
        scanf("%d", &pin);
        if (pin == p)
            break;
        else
            printf("Wrong pin enter again :\n");
        if (i == 3)
            printf("Max no. of tries performed :\n");
    }
    printf("REMAINING BALANCE : %f INR\n", cash);
}