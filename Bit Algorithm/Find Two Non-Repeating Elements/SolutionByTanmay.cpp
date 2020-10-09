#include<iostream>
using namespace std;

void twoNonRepeating(int a[], int n)
{
   int xor_val=0, num1=0, num2=0;
   for (int i=0;i<n;i++){xor_val ^= a[i];}
   //Last set bit of result
   int set_bit = xor_val & ~(xor_val - 1);
   
   for (int i=0;i<n;i++)
   {
     if (a[i] & set_bit)
     {
         num1 ^= a[i];
     }
     else{
         num2 ^= a[i];
     }
   }
   cout<<num1<<" "<<num2<<endl;
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for (int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  twoNonRepeating(a, n);
  return 0;
}
