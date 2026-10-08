#include <stdio.h>
// Calculates division and remainder of two numbers 
// Take two numbers and return their results
// Note: num2 should not be zero to prevent division error by zero
float get_division(int num1, int num2) {
    return (float) num1 / num2;
}
float get_remainder(int num1, int num2) {
    return num1 % num2;
}

int main(void) {
    int num1, num2, remainder;
    float quotient;

    // Get input value from user
    printf("Enter dividend number: ");
    scanf("%d", &num1);

    printf("Enter divisor number: ");
    scanf("%d", &num2);

    // Validation: Check if divisor is zero
    if (num2 == 0) {
        // Error Case: Cannot divide by zero
        printf("\n--ERROR: Division byzero is not allowed--\n");
    } else {
        // Success Case: Computes division via function call
        quotient = get_division(num1, num2);
        remainder = get_remainder(num1, num2);
        // Display result
        printf("\n--RESULTS--\n");
        printf("Quotient: %.2f\n", num1, num2, quotient);
        printf("Remainder: %d\n", remainder);

        //Check if the number is evenly divisible
        if (remainder == 0) {
            printf("%d is fully divisible by %d\n", num1, num2);
        } else {
            printf("%d is not fully divisible by %d\n", num1, num2);
        }

        return 0; // Indicate successful program execution
    }
}
