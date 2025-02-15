#include<stdio.h>
int main(){
 int n, row , col;
 printf("Enter N : ");
 scanf("%d",&n);

 for(row=1 ; row<=n ; row++)
 {
     // Space Printing
     for(col=1 ; col<= n-row ; col++)
    {
        printf(" ");
    }
        // for printing col
    for(col=1 ; col<=row ; col++)
    {
        printf("%d", col);
    }
    printf("\n");
 }

 /* output :      1       A
                    12     AB
                  123   ABC
                1234 ABCD

 */


return 0;
}
