#include <stdio.h>
// This program is written to get some arbitrary number from user to reach flag number in written directions
/** 
* @brief Makes some guess until reaching the written number
* @param attempt Input from user that might be changed at each while circle under guodence of if-else
* @param counter Enables while loop to count clearly
* @return Final counter and outputs
*/

int main(void)

{
    int attempt;
    int counter;

    counter = -1; // Starts at zero to avoid avoid off-one-by-error

    // Get first attempt from user to start the while loop
    printf("Entered number: ");
    scanf("%d", &attempt);

    while(attempt != 78)
    {

        attempt < 78 ? printf("Tell Greather Number\n") : printf("Tell Smaller Number\n"); // // Confnes the range of possible numbers
        printf("Entered number: ");
        scanf("%d", &attempt);
        counter = counter +1;
        
    }

    printf("!!!Spot on!!!\n");
    printf("You guessed it correcty at your %dth try!\n", counter);

    return 0;
}