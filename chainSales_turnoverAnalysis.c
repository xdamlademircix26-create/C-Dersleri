#include <stdio.h>

int main(void)
{
    int branch, category,revenue, branchNo;
    int maxRevenue = 0;
    
    printf("Enter number of branch: ");
    scanf("%d", &branch);

    printf("Enter number of category: ");
    scanf("%d", &category);

    for(int i = 1; i <= branch; i++)
    {
        int totalTurnover = 0;
        for(int j = 1; j <= category; j++)
        {
            printf("Enter branch %d, category %d revenue: ", i, j);
            scanf("%d", &revenue);
            
            totalTurnover += revenue;  
            
        }
        if (totalTurnover > maxRevenue)
        {
            maxRevenue = totalTurnover;
            branchNo = i;
        }
        printf("Total revenue of branch %d is %d\n", i, totalTurnover);
    }
    printf("The number of branch that make highest revenue is %d \n", branchNo);
    printf("The amount of higest revenue of %d is %d\n", branchNo, maxRevenue);
    return 0;
}