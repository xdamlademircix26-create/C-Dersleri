#include <stdio.h>

// Function that calculates division and returns quatient-remainder of two numbers
int get_quotient(int num1, int num2) { 
    return num1 / num2;
}
int get_remainder(int num1, int num2) {
    return num1 % num2;
}

int main(void) { 
    int num1, num2;                         // Declare variables for user input
    int quantient_result, remainder_result; // Declare variables for total result

    //Prompt user to enter inputs
    printf("Enter dividend number: ");
    scanf("%d", &num1);

    printf("Enter divisor number: ");
    scanf("%d", &num2);

    // Check the number two is not equal zero to avoid division error
    if (num2 != 0) { 
        // Call get_quantied function and store returned result
        quantient_result = num1 / num2;
        // Call get_ remaineder function and store returned result
        remainder_result = num1 % num2;

        // Display results for the screen
        printf("\n---RESULTS---\n");
        printf("Quantient: %d\n", quantient_result);
        printf("Remainder: %d\n", remainder_result);

        // Check if the dividend is evenly divisable 
        if (remainder_result == 0) { 
            printf("%d is fully divisable by %d: %d\n", num1, num2, quantient_result);
        } else { 
            printf("%d is not fully divisable by %d: %d\n", num1, num2, quantient_result);
        } 
    } else {
        printf("Error:Division by zero is undefined!\n");
        }
        
    return 0;
}




