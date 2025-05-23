#include<stdio.h>
int main()
{
     /*
    101 ---5
    110 ---6
    ____
    0 1 1---3

    */
int x,y;
printf("enter the value of x & y :");
scanf("%d %d",&x,&y);

int result = x ^ y ; // bitwise Xor
printf("result is : %d", result);



return 0;
}

