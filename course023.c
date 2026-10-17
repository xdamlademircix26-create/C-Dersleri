#include <stdio.h>

int main(void)
{
    int num;

    // Get initial value input from user
    printf("Initial number: ");
    scanf("%d", &num);

    // Check if entered number is negative
    if (num < 0)
    { 
        printf("Unvalid number!!!\n");
    }
    else
    {  
        // Apply the loop until it has finished
        while (num >= 0)
        {
            num % 2 == 0 ? printf("Even number: "):printf("Odd number:  ");
            printf(" %d\n", num);
            num = num -1;
        }
        printf("Loop execution has finished!!!\n");
    
         return 0;
    }
}