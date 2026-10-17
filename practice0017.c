#include <stdio.h>

// Calculate operations of three numbers
// Function that take three numbers and return their operations
float multiply_subtract(float num1, float num2, float num3) { 
    return (num1 - num2) * num3;
}

int main(void) { 
    float num1, num2, num3; // Declare variables for user input
    float product;          // Declare variable for total result

    // Prompt the user to enter inputs
    printf("Enter minuend number: ");
    scanf("%f", &num1);

    printf("Enter subtrahend number: ");
    scanf("%f", &num2);

    printf("Enter multiplier number: ");
    scanf("%f", &num3);

    // Call the multiply_subtract function and store returned product
    product = (num1 - num2) * num3;

    // Display the product to the screen
    printf("(%.2f - %.2f) * %.2f: %.2f\n", num1, num2, num3, product);

    return 0; // Indicate succesfull program execuate
}

