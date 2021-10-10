#include <stdio.h>

int prime(int);
void main()
{
    int number, flag;
    printf("\n Enter a number");
    scanf("%d", &number);
    flag = prime(number);
    if (flag == 0)
        printf("\n The given number is a prime");
    else
        printf("\n The given number is not prime");
}
int prime(int number)
{
    int i, flag = 0;
    for (i = 2; i < number; i++)
        if (number % i == 0) {
            flag = 1;
            return flag;
        }
    return flag;
}
