// write a Program That Read input from user and print  sum and average

#include<stdio.h>
int main()
{
    int n,num[n],sum=0,i; // Data Type , Variable Declaration and Initialization

    printf("How Many Number : ");
    scanf("%d",&n);

    //int num[n];

    printf("Enter The Number : ");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        sum = sum + num[i] ;

    }
        printf("The sum of those Number : %d \n", sum);
        printf("The Average Of Those Number : %.2f \n", (float) sum/n);








    return 0;
}
