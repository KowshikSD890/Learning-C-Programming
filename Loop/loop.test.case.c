#include<stdio.h>
int main(){
int tc;
scanf("%d",&tc);

for(int x=1 ; x<=tc ; x++)
{
    int a,b;
    scanf("%d%d",&a,&b);
   int sum = a+b;
    printf("case %d: %d\n",x,sum);
}


return 0;
}
