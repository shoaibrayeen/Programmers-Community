#include <iostream>
using namespace std;
void median(int a[],int size)
{
    float avg;
    int g=size-1;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if(size%2!=0)
    {
        cout<<a[(g+1)/2];
    }
    else
    {

          avg=(a[g/2]+ a[(g+1)/2])/2;
          cout<<avg;

    }
}
int main() 
{
    int s;
    cout<<"Enter the size of array: \n";
    cin>>s;
    int b[s];
    cout<<"Enter the array: \n";
    for(int k=0;k<s;k++)
    {
        cin>>b[k];
    }
    median(b,s);
    return 0;
}
