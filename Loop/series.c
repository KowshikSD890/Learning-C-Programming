#include<stdio.h>
int main()
{
    int n,i, sum=0;

    printf("Enter the last number of series :");
    scanf("%d",&n);
    printf("1+2+3+.....+%d",n);

    for(i=1;i<=n ;i=i+1)
    {
        sum=sum+i;
    }
printf(" = %d \n", sum);


    getch ();
}
