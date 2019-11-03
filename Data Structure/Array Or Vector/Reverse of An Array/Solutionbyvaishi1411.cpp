#include <bits/stdc++.h>
using namespace std;

int reverse(int v[], int n);
int main()
{ 
	int n,i=0,item,res;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int *shi= new int [n]; 
	cout<<"Enter the elements of an array: ";
	for(i=0;i<n;i++) 
	{ 
	  cin>>shi[i];
	}  
		 reverse(shi,n); 
		cout<<"REverse of the given array is: ";
		for(i=0;i<n;i++){ 
		cout<<shi[i]<<"\t";
		}
   
    return 0;
} 
 
 int reverse(int v[], int n) 
{  int i=0,j=n-1,temp; 
		   while(i<j) { 
		     temp=v[i]; 
		     v[i]=v[j];
		     v[j]=temp;
		     i++; 
		     j--;
   }
 
}
