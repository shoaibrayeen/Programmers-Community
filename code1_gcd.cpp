//GCD OF N NUMBERS
//RUNNING CODE

#include <iostream>
using namespace std;

int min(int arr[], int n)
{
    int minim = arr[0], i;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < minim)
            minim = arr[i];
    }
   
    return minim;
}

int gcd(int arr[],int n)
{
    int low=min(arr,n);
    int i;
    for(i=0;i<n;i++)
    {
        
        if(arr[i]%low==0)
        {
            continue;
        }
        else
        {
           low=low-1;
           i=-1;
        }
            
    }
    return low;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    int hcf  = gcd(arr,n);
    cout<<"\n"<<hcf;
    return 0;
}