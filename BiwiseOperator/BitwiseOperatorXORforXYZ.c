#include<stdio.h>
int main()
{
    /* 
    5 ^ 6 = 3
    3 ^ 7 = 4
    
    101--5
    110--6
    _____
    011---3
    111----7
    ____
    100  ---4  
    */

int x,y,z;
printf("enter the value of x , y , z :");
scanf("%d%d%d",&x,&y,&z);

int result = x ^ y ^ z ; // bitwise Xor
printf("result is : %d", result);



return 0;
}

