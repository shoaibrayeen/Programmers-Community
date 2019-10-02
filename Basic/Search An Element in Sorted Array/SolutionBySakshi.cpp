#include<iostream>
using namespace std;

int ternarySearch(int arr[],int l,int r,int x)
{
	if(l<r)
	{
		//calculating two mids
		
		int mid1=l+(r-l)/3;
		int mid2=r-(r-l)/3;
		
		if(arr[mid1]==x)
		{
			return mid1;	
		}
		
		if(arr[mid2]==x)
		{
			return mid2;	
		}
		
		
		if(arr[mid1]>x)
		{
			return ternarySearch(arr,l,mid1-1,x);
	    }
		
		
		 if(arr[mid2]<x)
		 {
		 	 return ternarySearch(arr,mid2+1,r,x);
			
	   }   
			
		else
		{
			return ternarySearch(arr,mid1+1,mid2-1,x);
	   }
		
		}
		return -1;
}
int main()
{
	int input,n;	
	cout<<"enter the element you want to search\n";
	cin>>input;
	cout<<"enter the size of the array\n";
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	int result=ternarySearch(arr,0,n-1,input);
	if(result!=-1)
	{
	cout<<"the element is found at location "<<result;
	}
	else
	{
		cout<<"element not found";
	}

	
	return 0;
}
