#include <stdio.h>

// Computes quotient and remainder by utilize two number
// Takes two number and return their division
// Note: Divisor should not be zero to prevent division error

double get_quotient(int dividend, int divisor){
    return (double)dividend / divisor;
}

int get_remainder(int dividend, int divisor) {
    return dividend % divisor;
}

int main(void) {
    int dividend, divisor, remainder;
    double quotient;
    
    // Get input values from user
    printf("Enter dividend number: ");
    scanf("%d", &dividend);

    printf("Enter divisor number: ");
    scanf("%d", &divisor);

    // Validation: Prevent division by zero error
    if (divisor == 0) {
        // Error case: Division by zero is undefined
        printf("\nERROR:Division by zero is not allowed!\n");
    } else {
        // Success case:Computes division via function call
        quotient = get_quotient(dividend, divisor);
        remainder = get_remainder(dividend, divisor);
    
        // Display results
        printf("%d / %d: %.2lf\n", dividend, divisor, quotient);
        printf("Remainder result: %d\n", remainder);
    }

    return 0; // indicate succesfull execution
}
