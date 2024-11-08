#include<stdio.h>
int main()
{
    int num1, num2, n1, n2, rem, gcd, lcm;

    printf("Enter Two Number :");
    scanf("%d %d", &num1, &num2);

 /* Assigning Num1 & Num2 to n1 &n2
 For GCD Calculation*/

    n1=num1;
    n2=num2;
 //Using while Loop
    while(n2!=0)
    {
        rem = n1%n2;
        n1=n2;
        n2=rem;
    }

    gcd = n1;
    lcm = (num1*num2)/gcd; // LCM formula

    printf("GCD is : %d \n", gcd);
    printf("LCM is : %d \n", lcm);

    return 0;
}
