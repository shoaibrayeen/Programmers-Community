#include<iostream>
using namespace std;

void swap(int *j,int *k)
{
	int temp= *j;
	*j= *k;
	*k=temp;

}
void rev(int *a,int n)
{
	int last=n-1;
	for(int i=0;i<n/2;i++)
		swap(a[i],a[last-i]);
}


int main()
{

int n;
cin>>n;

int *a=new int[n];

for(int i=0;i<n;i++)
   cin>>a[i];

   rev(a,n);

for (int i = 0; i < n; i++)
{
	cout<<a[i]<<"  ";

}


}
