#include <stdio.h>

int main(void)
{
    int add_box = 0;
    int number;
 
    printf("Number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        add_box = add_box + number;
        printf("Addiction of entered number: %d\n", add_box); 
        printf("Number: ");
        scanf("%d", &number);
        
    }
    printf("The loop is completed!\n");
    return 0;

}