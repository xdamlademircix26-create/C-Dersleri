#include <stdio.h>
 
int main(void)
{
    int number;
    int dividendBox = 0;
    int counter;

    printf("Enter Number: ");
    scanf("%d", &number);

    counter = 1;
    while (counter < number)
    {
        if (number % counter == 0)
        {
            dividendBox = dividendBox + counter;
        }

        counter++;
    }

    dividendBox == number ? printf("PERFECT NUMBER\n") : printf("NOT PERFECT NUMBER\n");
    return 0;
}