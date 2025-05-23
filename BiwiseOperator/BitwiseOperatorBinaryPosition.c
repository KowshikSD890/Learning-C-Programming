#include<stdio.h>
int main(){
    
    /* 
    13 - 1101 there if we count from right side
    1 is  0th position, 0 is first position , 1 is 2nd position and 
    1 is 3rd position
    by this we can find the binary nnumber position
    */
int n, position;
scanf("%d %d",&n,&position);

int result = (n >> position) & 1 ;
printf("Result : %d\n", result);

return 0;
}
