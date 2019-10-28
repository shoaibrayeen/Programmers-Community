//  1 1 2 3 5 8 

#include <iostream>
using namespace std;

int Fibb(int n)
{
 int f=1,s=1,t=0;

 while(n>0)
 {
 	t=f+s;
 	s=t;
 	f=s;

 	n--;

 }

 return t;

}
int main()
{
	int n;
	cout<<"\n Enter the Number ";
	cin>>n;

	int k=Fibb(n);

	cout<<k;
}
