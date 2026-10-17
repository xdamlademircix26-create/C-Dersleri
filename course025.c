#include <stdio.h>

int main(void)
{
    int square = 1; //Declare a variable to store the calculated square of the number
    int limit;
    
    // Get highest input value from user t
    printf("Enter highest value of loop: ");
    scanf("%d", &limit);

    // Validation : Check if input is not in the required interval
    if (limit < 0)
    {
        printf("Inavlid input for loop!!!");
        return 0;
    }

    int i = 1;
    while (i <= limit)
    {
        // Pirint the current i
        printf("Number: %d  ", i);
        // Calculate square of current value (i) and store it in 'store'
        square = i * i;
        // Print the calculated square value
        printf("Square: %d\n", square);
        // Increase the number i by 1 to move to next number
        i++;
        
    }
    printf("Loop has finished!!!\n");
    return 0;

}