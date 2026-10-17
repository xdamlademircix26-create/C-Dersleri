#include <stdio.h>
/**
* Calculates if the number divisible by 3
* @param number Dividend
* @return Computed integar quotient and remainder
*/
// Note: There is no division by zero error because the divisor is 3
int divide_by_three(int number) {
    return number / 3;
}
int get_remainder_of_three(int number) {
    return number % 3;
}

int main(void) {
    int number, quotient, remainder;
    int divisor = 3;

    // Get input value from user
    printf("Enter dividend: ");
    scanf("%d", &number);

    // Calculate division and remainder via function call
    quotient = divide_by_three(number);
    remainder = get_remainder_of_three(number);

    // Display result
    printf("\n***RESULTS***\n");
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    // Divisibility Status: It determines wheather it is divisible by 3
    if (remainder == 0) {
        printf("%d is fully divisible by 3\n", number);
    } else if (remainder == 1) {
        printf("%d leaves remainder of 1\n", number);
    } else {
        printf("%d leaves remainder of 2\n", number);
    }

    return 0; // indicate successful program execution
}
