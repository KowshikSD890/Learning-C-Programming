#include<stdio.h>
int main(){

int n, row, col;
printf("Enter N :  ");
scanf("%d",&n);

for(row=n ; row>=1 ; row--)
{
    // For Printing Space
    for(col=1 ; col<=n-row ; col++)
    {
        printf(" ");
    }
    for(col=1 ; col<=2*row-1 ; col++)
    {
        printf("*");
    }

    printf("\n");

}

return 0;
}

