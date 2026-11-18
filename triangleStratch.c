#include <stdio.h>

int main(void)
{
    char ch = '*';
    int rowNumber;

    printf("Enter number of row to stratch vertical triangle: ");
    scanf("%d", &rowNumber);

    for(int i = 1; i <= rowNumber; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("% c", ch); // printf("*"); , printf("% c", '*');
        }
        printf("\n");
    }
    return 0; 
}