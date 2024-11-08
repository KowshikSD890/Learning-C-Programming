#include<stdio.h>
int main()
{
    int num, temp, rem, sum=0;

    printf("Enter any number : "); // Taken Input From User
    scanf("%d", &num);

    temp=num; // Assigning num to temp for Reverse Number

    while(temp!=0) // using while Loop
    {
        rem= temp % 10; /* C O U  N T E R   U P D A T E  P A R T */
        sum= sum*10 + rem;
        temp= temp / 10;
    }
    printf("Sum Of Digit is : %d \n", sum);

    return 0;
}
