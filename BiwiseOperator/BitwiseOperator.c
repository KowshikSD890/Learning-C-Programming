#include<stdio.h>
int main()
{
     /*
    101 ---5
    110 ---6
    ____


    */
int x,y;
printf("enter the value of x & y :");
scanf("%d %d",&x,&y);

int result = x | y ; // bitwise or
printf("result is : %d", result);



return 0;
}
