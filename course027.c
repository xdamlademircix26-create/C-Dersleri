#include <stdio.h>

int main(void)
{
    int square;
    int limit;
    char option;

    printf(" Enter highest value : ");
    scanf("%d", &limit);

    //Check if entered value is in wrong interval for loop
    if (limit < 0)
    {
        printf("Invalid value\n");
        return 0;
    }

    printf(" Decide option to go on or do not:(y/n) ");
    scanf(" %c", &option);

    // Check if user enter wrong letter 
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
        // The order of loop is also should be taken consider
        printf(" SAYI: %d ", i);
        int square = i * i; // Dont forget to decide squares type 
        printf(" SQUARE: %d\n", square);
        i++;
    // If you want to interrupt loop just use applied method similarly
    if (i % 5 == 0)
    { 
        printf(" Decide option to go on or do not:(y/n) ");
        scanf(" %c", &option);
    }

    // This condition may be same as the  prior if intervals 
    // As soon as i learn the using function to dont repeat yourself , i am going to add some notes to convert another style of programing

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
/**
*If the program must continue after entered invalid value or character:
*We should use while loop also:
* while (option != 'n' && options != 'y')
    {
        printf("Inavalid charakter , please try again\n");
        scanf(" %c", &options);
    }
* while (limit < 0)
    {
        printf("Invalid value, please try again\n");
        scanf("%d", limit);
        }
*/