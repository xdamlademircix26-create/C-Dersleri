#include <stdio.h>

int main(void)
{
    int number, modulo;
    int dividendBoxN = 0;
    int dividendBoxR = 0;
    int reversal = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            dividendBoxN = dividendBoxN + i;
        }
    }

    while (number > 0)
    {
        modulo = number % 10;
        reversal = reversal * 10 + modulo;
        number = number / 10;
    }

    for (int j = 1; j < reversal; j++)
    {
        if (reversal % j == 0)
        {
            dividendBoxR = dividendBoxR + j;
        }
    }

    if (dividendBoxN == 1 && dividendBoxR == 1)
    {
        printf("EMIRP NUMBER\n");
    } else {
        printf("NOT EMIRP NUMBER\n");
    }
    return 0;
}