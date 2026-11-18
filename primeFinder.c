#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++)
    {
        int dividendSum = 0;
        for(int j = 2 ; j <= i; j++)
        {
            if(i % j == 0)
            {
                dividendSum = dividendSum + j;
            }
        }

        if(dividendSum == (i))
        {
            printf("%d\n", i);
        }
            
    }
    return 0;
}