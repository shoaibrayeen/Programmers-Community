#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[100][100],b[100][100],r,c;
	cout<<"Enter No of Rows "<<endl;
	cin>>r;
	cout<<"Enter No of Columns "<<endl;
	cin>>c;

	cout<<"Enter Values "<<endl;
	for (int i = 0; i < r ; i++)
	{
		for(int j=0; j < c; j++)
			cin>>a[i][j];
	}

	for (int i = 0; i < r ; i++)
	{
		for(int j=0; j < c; j++)
			b[i][j] = a[j][i];
	}

		for (int i = 0; i < r ; i++)
	{
		for(int j=0; j < c; j++)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}

}

