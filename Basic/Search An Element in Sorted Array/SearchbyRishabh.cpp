#include<iostream>
using namespace std;

void BinarySearch(int a[],int n,int val)
{

int f=0,l=n-1;    //first   //last
int mid=(f+l)/2;  //mid
while(f<=l)
{
	if(a[mid]<val)
		f=mid+1;
	else
	 if(a[mid]>val)
	 	l=mid-1;
	else
		if(a[mid]==val)
		{
			cout<<"YES";
			return;
		}
	mid=(f+l)/2;
}
cout<<"NO";

return;

}

int main()
{
	int a[100],n,val;
	cin>>n;                          //size
	for(int i=0;i<n;i++)
		cin>>a[i];                   //Array
    cin>>val;                        //searching value

	BinarySearch(a,n,val);

}