#include <iostream>
using namespace std;
void reverse(int a[],int size)
{
    int b[100];
    int i=size-1,j=0;
    while(j<size)
    {
        b[j]=a[i];
        j++;
        i--;
    }
    cout<<"The resverse array is: ";
    for(int k=0; k<size; k++)
    {
        cout<<b[k]<<" ";
    }
    cout<<endl;
}
int main() 
{
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;
    cout<<endl;
    int g[s];
    cout<<"Enter the array: ";
    for(int i=0; i<s; i++)
    {
        cin>>g[i];
    }
    cout<<endl;
    reverse(g,s);
    return 0;
}
