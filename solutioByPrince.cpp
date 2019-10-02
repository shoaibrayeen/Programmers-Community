//A Sorted Array is given. You need to find an element which is given to you.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Size of Sorted Array"<<" - ";
	cin>>n;//int n = sizeof(arr)/sizeof(arr[0]);
	int arr[n];
	cout<<"Enter Elements in a array In a Sorted Order"<<" ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter Which element you want to Search"<<" -  ";
	int item;
	cin>>item;
 	int beg = 0;
 	int end = n;
 	int mid = int((beg+end)/2);
 	while( beg<=end and arr[mid]!= item)
 	{
 		if (item<arr[mid])
 		{
 			end = mid - 1;
		 }
 		else
 		 {
 		 	beg = mid+1;
		  }
	mid = int((beg+end)/2);
	 }
	 if (arr[mid]==item)
	 {
	 	cout<<"Which element you search at location"<<" - "<<mid+1<<endl;
	 }
	 else
	 {
	 	cout<<"Which element you Search Not Found In a Sorted Array";
	 }
	 return 0;
	  
}
