#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r1,c1,a[100][100],r2,c2,b[100][100],c[100][100];
	cout<<"    Matrix A     "<<endl;
	cout<<"Enter No of Rows "<<endl;
	cin>>r1;
	cout<<"Enter No of Columns "<<endl;
	cin>>c1;
	cout<<"Enter the values "<<endl;
	for(int i = 0; i < r1; i++)
		for(int j = 0;j < c1; j++)
			cin>>a[i][j];


	cout<<"    Matrix B     "<<endl;
	cout<<"Enter No of Rows "<<endl;
	cin>>r2;
	cout<<"Enter No of Columns "<<endl;
	cin>>c2;
	cout<<"Enter the values "<<endl;

	for(int i = 0; i < r2; i++)
		for(int j = 0;j < c2; j++)
			cin>>b[i][j];



	if(c1 == r2)
	{

	for(int i = 0; i < r1; i++){
		for(int j = 0; j < c2; j++)
		{
			for (int k = 0; k < r2 ; k++)
			{

				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}
			
	}

  
  else
    cout<<"Matrix Operation cannot be performed "<<endl;
  
  
  cout<<"After Multiplication "<<endl;
	for(int i = 0; i < r2; i++){
		for(int j = 0;j < c2; j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
		}
	

}
