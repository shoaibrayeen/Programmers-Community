/*
    A positive number N is given to you and You need to check whether it's prime or not.
    N ( It should be positive and greater than or equal to 2.)
*/
#include<iostream>
using namespace std;

void check_For_Prime(int);

int main()
{
    int num;
    cout<<"Enter a number( It should be positive and greater than or equal to 2.): ";
    cin>>num;

    if(num>=2)
        check_For_Prime(num);
    else
        cout<<"please enter a valid number";

}

void check_For_Prime(int n)
{
    int count=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
            if(count>0)
                break;
        }

    }
    if(count==0)
        cout<<"\nYES";
    else
        cout<<"\nNO";
}


