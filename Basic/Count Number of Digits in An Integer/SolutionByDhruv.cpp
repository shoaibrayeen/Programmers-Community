#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
    long int value;
    int count = 0;

    /* Input a number from user */
    cout<<"Enter a number: ";
    cin>>value;

    /* Run loop till value is greater than 0 */
    while(value!= 0)
    {
        /* Increment digit count */
        count++;

        /* Remove last digit of value */
        value /= 10;
    }

    cout<<"\nTotal digits:"<<count;

    return 0;
}
