#include<iostream>
using namespace std;

bool Binary(int *a,int n, int k)
{
	int f=0,e=n-1;
	int mid=0;
	mid = (f+e)/2;
	while(f<=e)
	{
		

		if(a[mid]==k)
			return true;
		else 
		if(a[mid]>k)
			e=mid-1;

		else 
			if(a[mid]<k)
				f=mid+1;

		mid = (f+e)/2;


	}

	return false;
}

// 4 5 6 8 69 

// 7
 // f = 0 e = 4 mid = 2

int main()
{
	int n;

	cout<<"Enter Size"<<endl;
	cin>>n;
	
	int *a = new int[n];

	cout<<"Enter Values";
	for (int i = 0; i < n; i++)
	{
	  cin>>a[i];
	}
    
    int k=0;
	cout<<"Enter Element to be Searched "<<endl;
	cin>>k;

	bool b = Binary(a,n,k);

	if(b)
		cout<<"Yes";
	else  
		cout<<"No";

	return 0;
}
