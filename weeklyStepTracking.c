#include <stdio.h>

int main(void)
{
    int number;
    int totalStepBox = 0;
    int successfulDays = 0;

    for(int i = 1; i <= 7; i++)
    {
        printf("Enter day %d step count: ", i);
        scanf("%d", &number);
        printf("\n");

        totalStepBox += number;

        if(number >= 10000)
        {
            successfulDays += 1;
        }
    }
    printf("Number of successful days %d\n", successfulDays);
    if (successfulDays >= 4)
    {
        printf("Deserve a Treat!!!\n");
    }

    int dailyAvarage = totalStepBox / 7;
    printf("Daily avarega step count is %d\n", dailyAvarage);
    return 0;
    
}