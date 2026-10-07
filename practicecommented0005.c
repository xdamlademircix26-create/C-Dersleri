#include <stdio.h>
/**
* Calculates: ((num1 + num2) * num3) - (num4 / num5) + num6
* @param num1 Base number
* @param num2 Addend number
* @param num3 Multiplier
* @param num4 Dividend number
* @param num5 Divisor 
* @param num6 Addend second number
* @return Calculated float result
*/
// Computes operations and return result of six numbers 
// Note:num5 should not be zero to prevent division error
float get_operation(float num1, float num2, float num3, float num4, float num5, float num6) {
    return ((num1 + num2) * num3) - (num4 / num5) + num6;
}

int main(void) {
    float num1, num2, num3, num4, num5, num6; 
    float result;

    // Get input values from user
    printf("Enter base number: ");
    scanf("%f", &num1);

    printf("Enter addend number: ");
    scanf("%f", &num2);

    printf("Enter multiplier: ");
    scanf("%f", &num3);

    printf("Enter dividend number: ");
    scanf("%f", &num4);

    printf("Enter divisor: ");
    scanf("%f", &num5);

    printf("Enter addend number:");
    scanf("%f", &num6);
     
    // Validation:Prevent division error by zero
    if (num5 == 0) {
        // Error case:Cannot divide by zero
        printf("\nError:division by zero is not allowed!\n");
    } else {
        // Succesful case:Perform calculation via function call
        result = get_operation(num1, num2, num3, num4, num5, num6);
       
        // Display result
    printf("((%.2f + %.2f) * %.2f) - (%.2f / %.2f) +%.2f: %.2f\n", num1, num2, num3, num4, num5, num6, result);
    }
    
    return 0; // indicate successfull excution
}