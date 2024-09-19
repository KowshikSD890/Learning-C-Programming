/*Write a Program By Using Tolower Funtion for UpperCase
Letter to LoweCase Letter*/

#include<stdio.h>
int main()
{
    char lower, upper;
    printf("Enter Any UpperCase  Letter : ");
    scanf("%c", &upper);

    lower= tolower(upper);
    printf("The LowerCase Letter is : %c \n", lower);


    return 0;
}
