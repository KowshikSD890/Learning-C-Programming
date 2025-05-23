#include<stdio.h>
int main()
{
    /*
    101
    110
    ____


    */
int x,y;
printf("enter the value of x & y :");
scanf("%d %d",&x,&y);

int result = x & y ; // bitwise and
printf("result is : %d", result);



return 0;
}

