#include <stdio.h>

int main(void)
{
    int number, moduler;

printf("Enter a number: ");
scanf("%d", &number);

while (number / 10 >= 1)
{
    moduler = number % 10;
    printf("%d ", moduler);
    number = number - moduler;
    number = number / 10;

}

moduler = number;
printf("%d\n", moduler);

return 0;
}
