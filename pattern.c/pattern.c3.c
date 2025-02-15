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
        printf("*");
    }
    printf("\n");
 }

 for(row=n-1 ; row>=1 ; row--)
 {
     for(col=1 ; col<=n-row ; col++)
     {
         printf(" ");
     }
     for(col=1 ; col<=row ; col++)
        {
            printf("*");
        }
     printf("\n");    /* Output is :           *
                                                       **
                                                      ***
                                                   *****
                                                    ****
                                                     ***
                                                       **
                                                        *
                                                        */
 }



return 0;
}

