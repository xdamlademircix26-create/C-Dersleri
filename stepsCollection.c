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
        number = number - moduler;
        number = number / 10;
    }

    moduler = number;
    digitBox = digitBox + moduler;
    printf("%d\n", moduler);
    printf("%d\n", digitBox);

    return 0;
}
