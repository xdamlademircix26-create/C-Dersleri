#include <stdio.h>

int main(void)
{
    int number,reminder;
    int addBox;
    int originalNumber;

    printf("Enter Number: ");
    scanf("%d", &number);

    originalNumber = number; // Do not lose entered value in loop!!!
    addBox = 0; // Important to get correct result

    while(number >= 10)
    {
        while (number > 0)
        {
            reminder = number % 10;
            printf("%d: ", reminder);
        
            int result = 1; // Writing here has special purpose that empty cube value calculated prior loop
            int counter = 1;
            while(counter <= 3) // Calculation exponent of cubes via while loop
            {
                result = result * reminder;
                counter = counter + 1;
            }
            printf("CUBES OF NUMBER: %d\n", result);
            addBox = addBox + result; // Record cube of number to add 
            number = number / 10;
        }
        printf("CUBES OF STEPS SUM: %d\n", addBox);

    }

    originalNumber == addBox ? printf("AMSTRONG NUMBER\n") : printf("NOT AMSTRONG NUMBER\n");//Checking time
    return 0;
}
