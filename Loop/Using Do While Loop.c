//Write a Program That Print 1 to 100 odd Number By Using Do While Loop

#include<stdio.h>
int main()
{
    int i=1; // initialization
    do
    {
        printf("%d \n", i);
        i=i+2; //increment
    }while(i<=100); //condition

    return 0;
}
