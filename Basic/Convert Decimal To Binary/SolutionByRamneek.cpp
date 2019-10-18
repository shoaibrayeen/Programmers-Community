#include<iostream>

using namespace std;

int DecimalToBinary(int n)
{
    int i=0,k,l;
    int *Bin= new int[32];

    while(n>=1)
    {

        Bin[i]=n%2;
        n=n/2;

         i++;
    }
     l=i-1;
     cout<<"Binary number is :\n";
    for (k=l ; k >= 0; k--)
       {

        cout << Bin[k];

       }
return 0;
}


int main()
{
    int x;

    cout<<"Enter the decimal number\n";
    cin>>x;
    DecimalToBinary(x);

return 0;
}
