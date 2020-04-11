#include<iostream>
using namespace std;

long int ProductOfArray(int *a,int size)
{

   long int product = 1;

   for (int i = 0; i < size; i++)
   {

       product *=a[i];

   }

    return product;

}

int main()
{
    int n;
    cout<<"Enter Size"<<endl;
    cin>>n;
    int *a=new int(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        
    }

    cout<<ProductOfArray(a,n)<<endl;
    return 0;
}
