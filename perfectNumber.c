#include <stdio.h>
 
int main(void)
{
    int number;
    int dividendBox = 0;
    int counter;

    printf("Enter Number: ");
    scanf("%d", &number);

    counter = 1;
    while (counter < number) // Do not include number itself
    {
        if (number % counter == 0) // Sum all positve integer dividers
        {
            dividendBox = dividendBox + counter;
        }

        counter++;
    }

    dividendBox == number ? printf("PERFECT NUMBER\n") : printf("NOT PERFECT NUMBER\n");
    return 0;
}
// we might code while loop as for (int i = 1 ; i < number; i++)
