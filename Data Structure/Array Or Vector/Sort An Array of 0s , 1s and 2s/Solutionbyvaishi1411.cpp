#include <bits/stdc++.h>
using namespace std;

int main()
{ 
	int n,i=0,item,res;
		cout<<"Enter the size of the array: ";
		cin>>n;
	int *shi= new int [n]; 
		cout<<"Enter the elements of an array(with 0 & 1 & 2 only): ";
		for(i=0;i<n;i++) 
		{ 
		  cin>>shi[i]; 
		   
		}  
	                sort(shi,shi+n); 
			        cout<<endl;
		            cout<<"Sorted array is :\n"; 
		        for(i=0;i<n;i++){ 
		             cout<<shi[i]<<"\t";
	          	}
		           

    return 0;
} 
   
