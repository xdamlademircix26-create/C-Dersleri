#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    printf("Divisors Of %d : ");
    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            printf("  ");
            printf("%d", i);

        }

    }
    printf("\n");
    return 0;
}