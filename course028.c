#include <stdio.h>

int main(void)
{
    int number;
    int sumBox = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++)
    {
        sumBox += i;
        printf("%d\n", i);
    }
    printf("The sum of all numbers from 1 up to %d\n", sumBox);
    return 0;
}