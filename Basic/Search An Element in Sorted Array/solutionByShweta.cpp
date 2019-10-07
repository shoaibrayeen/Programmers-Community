#include<iostream>
using namespace std;
void binarysearch(int arr[], int n, int s){
	int first, last, middle;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < s)
			first = middle + 1;
		else if(arr[middle] == s)
		{
			cout<<"YES";
			break;
		}
		else
			 last = middle - 1;
		middle = (first + last)/2;
	}
	if(first > last)
		cout<<"NO";
}
int main()
{
	int n, i, s;
	cout<<"Enter total number of elements :";
	cin>>n;
  	int arr[n];
	cout<<"Enter "<<n<<" number in ascending order :";
	for (i=0; i<n; i++)
		cin>>arr[i];
	cout<<"Enter a number to find :";
	cin>>s;
	binarysearch(arr,n,s);
	return 0;
}
