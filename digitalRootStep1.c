#include <stdio.h>

int main(void)
{
    int number, moduler;

printf("Enter a number: ");
scanf("%d", &number);

while (number / 10 >= 1) // If the condition is written as (number > 0) we don't need to add any code lines outside the loop
{
    moduler = number % 10;
    printf("%d ", moduler);
    number = number - moduler; // Unnecessary line : Int division provide us to eliminate ones place / EX: 45/10 < 4 
    number = number / 10;

}

moduler = number;
printf("%d\n", moduler);

return 0;
}
