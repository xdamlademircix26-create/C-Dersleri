#include <stdio.h>

int main(void)
{
    int number, moduler;
    int digitBox;

    printf("Enter Number: ");
    scanf("%d", &number);

    while(number >= 10)
    {
        digitBox = 0;
        while(number / 10 >= 1)
        {
            moduler = number % 10;
            printf("%d ", moduler);
            digitBox = digitBox + moduler;
            number = number / 10;
        }
        moduler = number;
        printf("%d\n", moduler);
        digitBox = digitBox + moduler;
        number = digitBox;
    }
    number = digitBox;
    printf("Single-Digital Root: %d\n", digitBox);
    return 0;
}