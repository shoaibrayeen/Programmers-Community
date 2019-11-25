#include<iostream>
using namespace std;

int Sum(int *a, int n)
{
	int total=0;
	for(int i=0;i<n;i++)
		total+=a[i];
	return total;
}
int main()
{

	int n;
    cout<<"Enter Size "<<endl;
    cin>>n;
    int *a = new int[n];

    cout<<"Enter Values"<<endl;
    for(int i=0;i<n;i++)
    	cin>>a[i];

    cout<<"Sum of Array "<<Sum(a,n)<<endl;

    return 0;
}
