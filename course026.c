#include <stdio.h>

int main(void)
{
    char option;

    printf("Do you want to go on: 'y', 'n': ");
    scanf(" %c", &option);

    while (option != 'n')
    {
        if (option != 'y')
        printf("Entered invalid character!!!\n");

        else 
        {
            printf("The program continues to work...\n");
        }

    printf("Do you want to go on: 'y', 'n': ");
    scanf(" %c", &option);

    }
    printf("Program has finished!!!\n");
    return 0;
}