// Write a C Program to Create a Pyramid By Using PAttern

#include<stdio.h>
int main()
{
    int n, row, col;

    printf("Enter The N : ");
    scanf("%d",&n);

    for(row=1 ; row<=n ; row++)
    {
        // Printing Space
        for(col=1 ; col<=n-row ; col++)
        {
            printf(" ");
        }

        for(col=1 ; col<=2*row-1 ; col++) // Main Condition For Printing Stars And Pyramid Format 2*row-1
        {
            printf("*");
        }

       printf("\n");
    }

    return 0;
}
