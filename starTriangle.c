#include <stdio.h>

int main(void)
{
    int row;
    char symbol = '*';

    printf("Enter row number: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= i; j++) 
        {
            printf("% c", '*');
        }
        printf("\n");
    }

}