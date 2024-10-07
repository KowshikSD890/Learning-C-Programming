// Write a Program That Takes  any Number and Check Prime number or Not

#include<stdio.h>
int main()
{
    int  i, num, count=0;
    printf("Enter Any Number :");
    scanf("%d", &num);

    for(i=2 ; i<num ; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }

    if(count==0)
        printf("Prime Number");
    else
        printf("Not a prime Number");




    return 0;
}
