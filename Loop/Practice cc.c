// Continue And Break Statement

#include<stdio.h>
int main()
{
    int i;

    for(i=1; i<=10;i++)
    {
        if(i%3==0)
            continue;
        printf("%d \n", i);
        if(i==0)
            break;
    }



    return 0;
}
