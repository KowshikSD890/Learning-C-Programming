//Go  To Statement

#include<stdio.h>
int main()
{
    int i=1;
    print:
        printf("%d \t", i);
        i++;

        if(i<10)
            goto print;


    return 0;
}
