#include <stdio.h>

// Calculetes the operations of four numbers
// Takes four numbers and result their operations
int calculate_operation(int num1, int num2, int num3, int num4) { 
    return num1 - num2 * (num3 / num4);
}

int main(void) { 
    int num1, num2, num3, num4; // Declare variables for user input
    int result;                // Declare variable for the total result

    //Prompt the user to enter first number
    printf("Enter first number: "); 
    scanf("%d", &num1);

    // Prompt the user to enter second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Prompt the user to enter third number
    printf("Enter dividend number: ");
    scanf("%d", &num3);

    // Prompt the user to enter fourth number
    printf("Enter divisor number: ");
    scanf("%d", &num4);

    // Call the calculate_operation function and store returned value
    result = num1 - num2 * (num3 / num4);

    //Display the final result to the screen
    printf("Result of operation: %d\n", result);

    return 0; // Indicate successfull program execution
}



