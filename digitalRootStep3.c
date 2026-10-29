#include <stdio.h>

int main(void)
{
    int number, moduler;
    int digitBox;

    printf("Enter Number: ");
    scanf("%d", &number);

    while(number >= 10)
    {
        digitBox = 0; //Empty the box before starting new loop 
        while(number / 10 >= 1)
        {
            moduler = number % 10;
            printf("%d ", moduler);
            number = number - moduler;  // Unnecessary line :Int division easily eliminate ones places of number
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
/**
* while(number >= 10)
* {
*   digitBox = 0; // Empty the value that provided prior loop to start new loop without any confliction
*   while(number > 0)
*   {
*       moduler = number % 10;
*       printf("%d ", moduler);
*       digitBox = digitBox + moduler;
*       printf("%d", digitBox);
*       number = number / 10; // Eliminates ones place
*       number = digitBox;    // Load the value in box into number to continue the loop
*   }
*   printf("Single-Digit Root: %d\n", number);
}*/