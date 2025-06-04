#include<stdio.h>
int main ()
{
int tc;
scanf("%d",&tc);
int x=1;

    while(x<=tc){
int num;
scanf("%d",&num);
if(num%2==0)
    printf("even\n");
else
    printf("odd\n");
    x++;
    }

return 0;
}
