#include <stdio.h>

// Calculate division function of two numbers
// Take two numbers and return total operation
float divide(float num1, float num2) { 
    return num1 / num2; 
}

int main(void) {  
    float num1, num2; // Declare variables for user input
    float quotient;   // Declare variable to result

    // Prompt the user to enter inputs
    printf("Enter dividend number: ");
    scanf("%f", &num1);

    printf("Enter divisor number: ");
    scanf("%f", &num2);

    // Call the divide fuction and store returned value
    quotient = num1 / num2;

    // Display the final result for the screen
    printf("%.2f / %.2f : %.2f\n", num1, num2, quotient);

    return 0; // Indicate succesfull program execution
}




