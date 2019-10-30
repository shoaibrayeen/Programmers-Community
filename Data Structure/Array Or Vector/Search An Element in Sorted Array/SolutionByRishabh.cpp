#include<iostream>
using namespace std;

int BinarySearch(int a[],int n,int val)
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
			return 1;
		}
	mid=(f+l)/2;
}


return -1;

}

int main()
{
	int a[100],n,val;
	cout<<"Enter Size"<<endl;
	cin>>n;                          //size
	cout<<"Enter Values "<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];                   //Array
    cout<<"Enter Value To be Searched "<<endl;
    cin>>val;                        //searching value

	int k=BinarySearch(a,n,val);

	if(k==1)
		cout<<"Yes"<<endl;
	else if(k==-1)
		cout<<"No"<<endl;
}
