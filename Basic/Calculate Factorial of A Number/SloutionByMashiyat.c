#include <conio.h>
#include <stdio.h>

long int factorial(long int);
void main()
{
    long int number, fact;
    printf("\nEnter a number");
    scanf("%ld", &number);
    fact = factorial(number);
    printf("\n The factorial of the given number is: %ld", fact);
    getch();
}
long int factorial(long int n)
{
    int i;
    long int fact = 1;
    for (i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
