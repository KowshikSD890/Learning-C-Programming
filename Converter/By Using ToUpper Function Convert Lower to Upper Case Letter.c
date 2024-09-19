/*Write a Program By Using ToUpper Funtion for LowerCase
Letter to UpperCase Letter*/

#include<stdio.h>
int main()
{
    char lower, upper;
    printf("Enter Any LowerCase  Letter : ");
    scanf("%c", &lower);

    upper= toupper(lower);
    printf("The UpperCase Letter is : %c \n", upper);


    return 0;
}
