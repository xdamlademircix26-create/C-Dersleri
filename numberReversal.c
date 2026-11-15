#include <stdio.h>

int main(void)
{
    int modulo, number;
    int reverse = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    while (number > 0) // if the condition were (number >= 0 ) , it would create infinite loop due to 0 / 10 = 0 ...
    {
        modulo = number % 10; 
        reverse = reverse * 10 + modulo; //Multiplying a number by 10 shift the steps of that number to the left and add 0 to one step
        number = number / 10; // int division easily eliminate last step rather calculating in a complex way

    }

    printf("Reverse Number = %d\n", reverse);
    return 0;
}
