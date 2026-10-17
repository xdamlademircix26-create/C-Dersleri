#include <stdio.h>


int main(void)
{
    int even_addiction = 0;
    int odd_addiction = 0;
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    if(number <= 0)
    {
        printf("Entered unavalid number!!!\n");
        return 0;
    }

    int i = 1;
    while (number >= i)
    {    
        if (i % 2 == 0)
        {
           even_addiction = even_addiction + i;
        } 
        else
        {
            odd_addiction = odd_addiction + i;
        } 

        i++;
    }
    printf("Loop has finished\n");
    printf("Result of evens addiction: %d\n", even_addiction);
    printf("Result of odds addiction: %d\n", odd_addiction);

    return 0;
}