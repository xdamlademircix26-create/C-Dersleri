#include <stdio.h>

int main(void)
{
    int number, moduler;
    int digitBox = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    while(number / 10 >= 1)
    {
        moduler = number % 10;
        printf("%d ", moduler);
        digitBox = digitBox + moduler;
        number = number - moduler;   // Unnecessery line in case of int division
        number = number / 10;
    }

    moduler = number;               // Unnecessary line in case of the condition  equals to (number > 0)
    digitBox = digitBox + moduler;  // Unnecessary line in case of the condition  equals to (number > 0)
    printf("%d\n", moduler);
    printf("%d\n", digitBox);

    return 0;
}
