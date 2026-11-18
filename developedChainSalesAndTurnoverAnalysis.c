#include <stdio.h>

int main(void)
{
    int productNumber;
    int categoryNumber;
    int totalRevenue = 0;
    int maxCategoryRevenue = 0;
    int maxCategory = 0;
    int minCategoryRevenue = 0;
    int minCategory = 0;

    printf("Enter category number: ");
    if(scanf("%d", &categoryNumber) != 1 || categoryNumber <= 0)
    {
        printf("Invalid input value!!!\n");
        return 1; // Indicate unsuccessful program 
    }
    
    printf("Enter number of category product: ");
    if(scanf("%d", &productNumber) != 1 || productNumber <= 0)
    {
        printf("Invalid input value!!!\n");
        return 1; // Indicate unsuccessful program
    }

    for(int i =1; i <= categoryNumber; i++)
    {
        int totalover = 0;
        for(int j = 1; j <= productNumber; j++)
        {
            int price;
            printf("Enter category %d, product %d 's price : ", i, j);
            scanf("%d", &price);

            // Provide a loop to enter valid input 
            while(price <= 0)
            {
               printf("Entered invalid value,please try again!\n");
               printf("Enter category %d, product %d 's price : ", i, j);
               scanf("%d", &price);
            }

            if(price > 0) 
            {
                totalover += price;
                totalRevenue += price;
            }
        }

        // Makes comprasion by using first values rather than initilize these variables as  0 and 99999999... 
        if(i == 1)
        {
            maxCategoryRevenue = totalover;
            minCategoryRevenue = totalover;
            maxCategory = 1;
            minCategory = 1;
        }

        if(maxCategoryRevenue < totalover)
        {
            maxCategoryRevenue = totalover;
            maxCategory = i;
        }

        if(minCategoryRevenue > totalover)
        {
            minCategoryRevenue = totalover;
            minCategory = i;
        }
    }
    printf("== ANALYSIS ==\n");
    printf("Total revenue : %d \n", totalRevenue);
    printf("---Max Category Revenue : %d ---\n", maxCategoryRevenue);
    printf("-The category number with max revenue: %d -\n", maxCategory);
    printf("---Min Category Revenue : %d ---\n", minCategoryRevenue);
    printf("-The category number with min revenue: %d -\n", minCategory);
    return 0;

}

/** We might adjust the lines between 36 and 47 as:
* while(scanf("%d", &price) != 1 || price <= 0) // New valuation procces is triggered by the condition itself not inside the cycle
* {
*    printf("Entered invalid value, please try again!!!)
*    while(getchar() != '\n') // Clear the faulty character
*/
