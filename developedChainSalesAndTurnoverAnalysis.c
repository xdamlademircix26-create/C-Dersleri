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
        return 1;
    }
    
    printf("Enter number of category product: ");
    if(scanf("%d", &productNumber) != 1 || productNumber <= 0)
    {
        printf("Invalid input value!!!\n");
        return 1;
    }

    for(int i =1; i <= categoryNumber; i++)
    {
        int totalover = 0;
        for(int j = 1; j <= productNumber; j++)
        {
            int price;
            printf("Enter category %d, product %d 's price : ", i, j);
            scanf("%d", &price);

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