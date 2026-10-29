#include <stdio.h>

int main(void)
{
    int number,reminder;
    int addBox;
    int originalNumber;

    printf("Enter Number: ");
    scanf("%d", &number);

    originalNumber = number;
    addBox = 0;

    while(number >= 10)
    {
        while (number > 0)
        {
            reminder = number % 10;
            printf("%d: ", reminder);
        
            int result = 1;
            int counter = 1;
            while(counter <= 3)
            {
                result = result * reminder;
                counter = counter + 1;
            }
            printf("CUBES OF NUMBER: %d\n", result);
            addBox = addBox + result;
            number = number / 10;
        }
        printf("CUBES OF STEPS SUM: %d\n", addBox);

    }

    originalNumber == addBox ? printf("AMSTRONG NUMBER\n") : printf("NOT AMSTRONG NUMBER\n");
    return 0;
}