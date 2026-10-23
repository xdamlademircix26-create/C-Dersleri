#include <stdio.h>
/**
* @brief Writes receipt of shopping
* @param label Cost of product
* @param totalCost Sum of labels
* @param VAT Percentage of added tax
* @param priceWithVAT Sum of VAT-totalCost
* @param counter Count the product via while loop
* @return Result of calculations
 */
int main(void)
{
    int counter = 0;
    float label;
    float totalCost = 0;
    float VAT = 0.20;
    float priceWithVAT;

    printf("Enter products cost(0 to finish the compute): ");
    scanf("%f", &label);

    while (label != 0)
    {
        totalCost = totalCost + label; //Acummulates products cost into totalCost box
        printf("Total price of products is %.2f\n", totalCost);

        printf("Enter products cost(0 to finish the compute): ");
        scanf("%f", &label);
        counter = counter + 1;

    }

    
    // Adds % 20 value added tax(VAT) fee to total price
    priceWithVAT = totalCost + totalCost * VAT;

    printf("The program is finished\n");
    printf("Total price of products is %.2f\n", totalCost);
    printf("Fee with VAT is %.2f\n", priceWithVAT);
    printf("Total number of products is %d\n", counter);

    return 0; // Indicates succesfull program execution
}
