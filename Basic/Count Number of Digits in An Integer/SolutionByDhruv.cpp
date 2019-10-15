#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    long int N;
    int count = 0;
    /* Input a number from user */
    cout<<"Enter a number: ";
    cin>>N;
    /* Check for the condition if the entered number is zero or not*/
    if(N==0)
    { 
      count++;
      cout<<"\nTotal Digits"<<count;
     }
    else
    {
    /* Run loop till value is greater than 0 */
    while(N!= 0)
     {
        /* Increment digit count */
        count++;
        /* Remove last digit of number*/
        N /= 10;
      }
     }
    cout<<"\nTotal digits:"<<count;
   return 0;
}
