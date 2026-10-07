#include <stdio.h>
#include <math.h>

// Calculate the power of base number by using pow function/math.h library
double calculate_power(double base, double exponent) {
    return base ^ exponent;
}

int main(void) {
    double base, exponent; // Declare variables for user inputs
    double pow_result;     // Declare variable for total value

    // Prompt the user to enter base_num abd exponent_num
    printf("Enter base number: ");
    scanf("%.lf", &base);

    printf("Enter exponent number: ");
    scanf("%.lf", &exponent);

    // Check if exponent is non-negative (greater or equal to zero)
    if (exponent >= 0) {
        // Call calculate_power function and store returned result
        power_result = pow(base, exponent);
        // Display final result to the screen
        printf("\n---RESULT---\n")
        printf("%.2lf raised to the power of %.2lf: %.2lf\n", base, exponent, power_result);
    } else {
        /// Handle negative exponent warning
        printf("Exponent should not be zero or negative!")
    }
    return 0; // Indicate sucessfull program execute
}

 // Custom function defination for exponentiation
double calculate_power(double base, double exponent) {
    double result = 1; // Initiliaze result to 1

    // Multiply base by itself exponent value
     for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }
    return result; // Return calculated value
}









