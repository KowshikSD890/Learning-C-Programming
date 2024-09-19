//Write a Program That Takes a UpperCAse Letter And Convert To LowerCase Letter

#include<stdio.h>
int main()
{
    char upper;
    printf("Enter Any UpperCAse Letter :");
    scanf("%c", &upper); //A=65

    printf("The LowerCase Letter is : %c", upper+32); //65+32=97 Which is 'a'


    return 0;
}
