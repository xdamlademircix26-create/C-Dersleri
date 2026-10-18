#include <stdio.h>

int main(void)
{
    double rem_balance = 100.000;
    char procces;
    double amount;

    printf("How much money: ");
    scanf("%lf", &amount);

    printf("Choose a procces that you want to keep going ('d'(deposite), 's'(spend), 'e'(exit): ");
    scanf("% c", &procces);


   while ( procces != 'e')
   {
    printf("Deposite or Spend?\n: ");
    if (procces == 'd')
    {
        rem_balance = rem_balance + amount;
        printf("Total balance: %.2lf\n", rem_balance);
    }
    else 
    {   if (rem_balance >= amount)
        { 
            rem_balance = rem_balance - amount;
            printf("Total balance: %.2lf\n", rem_balance);
        }
        else
        {
            printf("Not Enough Money!!!\n");
        }   
    }

   }
   return 0;
}
    
   
