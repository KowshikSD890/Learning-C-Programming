#include<stdio.h>
int main(){

int n, row, col;
printf("Enter N :  ");
scanf("%d",&n);

for(row=1 ; row<=n ; row++)
{
    // For Printing Space
    for(col=1 ; col<=n-row ; col++)
    {
        printf(" ");
    }
    for(col=1 ; col<=row ; col++)
    {
        printf("%d", row*col);
    }

    printf("\n");

}




return 0;
}
