#include <stdio.h>

int main(void)
{
    int square;
    int limit;
    char option;

    printf(" Enter highest value : ");
    scanf("%d", &limit);

    if (limit < 0)
    {
        printf("Invalid value\n");
        return 0;
    }

    printf(" Decide option to go on or do not:(y/n) ");
    scanf(" %c", &option);

    if (option != 'y' && option != 'n')
   {
        printf("Invalid character\n");
        return 0;
   }

     option == 'y' ? printf("Program continues to work\n"):printf("");

    if (option == 'n')
    {
        printf("See you later\n");
        return 0;
    }


    int i = 1;

    while (limit >= (i * i))
    {
        printf(" SAYI: %d ", i);
        int square = i * i;
        printf(" SQUARE: %d\n", square);
        i++;
    
    if (i % 5 == 0)
    { 
        printf(" Decide option to go on or do not:(y/n) ");
        scanf(" %c", &option);
    }

    if (option != 'y' && option != 'n')
    {
        printf("Invalid character\n");
        return 0;
    }

    if (option == 'n')
    {
        printf("See you later\n");
        break;
    }
    
    }
    printf("The square calculation loop has ended!!!\n");
    return 0;
}