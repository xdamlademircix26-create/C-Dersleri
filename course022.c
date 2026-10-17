#include <stdio.h>

// To list counting down
int main(void)
{
    int number;

    // Get input value from user to decide initial point of loop
    printf("Enter the initial number to start countdown: ");
    scanf("%d",  &number);

    number < 0 ? printf("Unvalid Value\n"):printf("Valid Value\n");
    // List the number until the loop has finished
    while (number >= 0)
    {
        printf("%d\n", number);
        number = number - 1;
    }
    /**
    * We might assign the number to i 
    * int i = number;
    * while(i <= 0){ printf(...); i = i -1 || i-- } 
    */
    
    printf("Loop execution completed!\n");
    return 0;
}
