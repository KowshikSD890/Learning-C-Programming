// write a Program To Printing a Square Shape By using Pattern

#include<stdio.h>
int main()
{
int n, row, col;

printf("Enter N : ");
scanf("%d",&n);

for(row=1 ; row<=n ; row++)
{
    for(col=1 ; col<=n ; col++)
        {
            printf(" %d ",col);
        }

         printf("\n");
}
                                /*output = 1 2 3 4
                                                1 2 3 4
                                                1 2 3 4
                                */


return 0;
}
