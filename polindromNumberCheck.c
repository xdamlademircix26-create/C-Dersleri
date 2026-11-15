#include <stdio.h>

int main(void)
{
    int number, modulo;
    int originalNumber;
    int reversal = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number > 0)
    {
        modulo = number % 10;
        reversal = reversal * 10 + modulo;
        number = number / 10;

    }

    reversal == originalNumber ? printf("POLINDROM NUMBER\n"): printf("NOT POLINDROM NUMBER\n");
    return 0;
}