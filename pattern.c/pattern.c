#include<stdio.h>
int main()
{
    int n, row , col;

    printf("Enter N : "); //Taking input form user
    scanf("%d",&n);
    for(row=1 ; row<=n ; row++) //Using first loop fow row
    {
        for(col=1 ; col<=row ; col++) // for col
        {
            printf(" * "); // Displaying object
        }
    printf("\n"); // Space
    }
    for(row=n-1 ; row>=1 ; row--)
    {
        for(col=1 ; col<=row ; col++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}
