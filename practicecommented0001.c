#include <stdio.h>

// Calculate operations of four numbers
// Takes four numbers and return  their operations
float calculate_operation(int num1, int num2, int num3, int num4) { 
    return (num1 + num2) * num3 - num4;
}

int main(void) {
    float num1, num2, num3, num4; // Declare variables for user input
    float result;                 // Declare variable for the total result
    
    //Prompt the user to enter inputs
    printf("Enter first addend number: ");
    scanf("%f", &num1);

    printf("Enter second addend number: ");
    scanf("%f", &num2);

    printf("Enter multiplier number: ");
    scanf("%f", &num3);

    printf("Enter subtrahend number: ");
    scanf("%f", &num4);

    // Call calculate_operation and store returned value
    result = (num1 + num2) * num3 - num4;

    // Display final result to the screen
    printf("(%f + %f) * %f - %f: %.2f\n", num1, num2, num3, num4, result);

    return 0; // Indicate succesfull program execution
}