// Multiplication Table

#include<stdio.h>
int main()
{
    while(1) // Computer Understand That (1) means true
        {
    int num,i;
    printf("Enter Any Value :"); // Taking Value From User
    scanf("%d", &num);

    for(i=1; i<=10; i++) // Initialization; Condition ; counter Update
        printf("%d X %d = %d \n", num, i, num*i); //Format of Multiplication Table

    }
    return 0;
}
