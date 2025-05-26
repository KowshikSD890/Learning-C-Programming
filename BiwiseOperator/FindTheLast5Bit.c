#include<stdio.h>
int main(){
int x;

scanf("%d",&x);

int bit0,bit1,bit2,bit3,bit4;
bit0 = x &1;
x = x >> 1;
bit1 = x &1;
x = x >> 1;
bit2 = x &1;
x = x >> 1;
bit3 = x &1;
x = x >> 1;
bit4 = x & 1;
x = x >> 1;

printf("The last five bit =%d%d%d%d%d\n",bit4,bit3,bit2,bit1,bit0);

return 0;
}
