
//Write a Program That Takes a LowerCAse Letter And Convert To UpperCase Letter

#include<stdio.h>
int main()
{
    char lower;
    printf("Enter Any LowerCase Letter :");
    scanf("%c", &lower); //a=97

    printf("The LowerCase Letter is : %c", lower-32); //97-32=65 Which is 'A'


    return 0;
}
