#include <stdio.h>

// Function that calculates and returns quatient of two numbers
int get_quotient(int dividend, int divisor) { 
    return dividend / divisor;
}

// Function taht calculates and returns remainder of two numbers
int get_remainder(int dividend, int divisor) { 
    return dividend % divisor;
}

int main(void) { 
    int dividend, divisor;   // Declare valuables for user input
    int quotient_result, remainder_result; // Declare valuable for total results

    // Prompt user to enter inputs
    printf("Enter dividend value: ");
    scanf("%d", &dividend);

    printf("Enter divisor value: ");
    scanf("%d", &divisor);

    // Check if divosor is not zero to avoid division error
    if (divisor != 0) { 

        // Call get_quotient function and store returned result
        // Call get_remaineder function and store returned result
        quotient_result = dividend / divisor;
        remainder_result = dividend % divisor;

         // Display final results for the screen
        printf("\n=== RESULTS ===\n");
        printf("Quatient: %d\n", quotient_result);
        printf("Remainder: %d\n", remainder_result);

        // Check if dividend is evenly divisable
        if (remainder_result == 0) { 
            printf("%d is fully divisable by %d\n", dividend, divisor);
        }
        else { 
            printf("%d is not fully divisable by %d\n", dividend, divisor);
        }

    } else { 
        printf("Error:Division by zero is not allowed!\n");
    }
 
    return 0; // Indicate succesfull program execute
    }


    


    


    


