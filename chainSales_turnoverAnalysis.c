#include <stdio.h>

int main(void)
{
    int branch, category,revenue, branchNo; // if branchNo were declared inside the loop , we couldn't use it outside the loop
    int maxRevenue = 0;
    // These inputs determine number of product category and branch rather than rectricting the program to a fixed number
    printf("Enter number of branch: ");
    scanf("%d", &branch);

    printf("Enter number of category: ");
    scanf("%d", &category);

    for(int i = 1; i <= branch; i++)
    {
        int totalTurnover = 0; // It is important to calculate each branch separately rather than adding them all together.
        for(int j = 1; j <= category; j++)
        {
            printf("Enter branch %d, category %d revenue: ", i, j);
            scanf("%d", &revenue);
            
            totalTurnover += revenue;  
            
        }
        if (totalTurnover > maxRevenue)
        {
            maxRevenue = totalTurnover; // This line records the highest value of revenue before it is reset by line 16
            branchNo = i; // It also record the branch with the highest revenue based on loop index
        }
        printf("Total revenue of branch %d is %d\n", i, totalTurnover);
    }
    printf("The number of branch that make highest revenue is %d \n", branchNo); // It gives report to outcoms
    printf("The amount of higest revenue of %d is %d\n", branchNo, maxRevenue); // it gives report to outcomes
    return 0;
}
