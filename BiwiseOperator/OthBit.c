#include<stdio.h>
int main(){
int x;
scanf("%d",&x);

int result = x & 1;
printf("The Value Of Zeroth Bit : %d\n", result);

return 0;
}
