//to display the multiplication of two matrices
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
  clrscr();
/*******************input********************************/
  int rows1,cols1,rows2,cols2,i, j, a[100][100];
  cout<<"enter the rows and columns of 1st Matrix "<<endl;
  cin>>rows1>>cols1;
  cout<<"enter the elements of the 1st matrix "<<endl;
  for(i=0;i<rows1;i++)
  {
	for(j=0;j<cols1;j++)
	{
		cin>>a[i][j];
	}
  }
  cout <<"Enter rows and columns of 2nd Matrix\n";
  cin >> rows2 >> cols2;
  cout<<"enter the elements of the 2nd matrix \n";
  int b[100][100];
  for(i=0;i<rows2;i++)
  {
	for(j=0;j<cols2;j++)
	{
		cin>>b[i][j];
	}
  }
/********************logic*******************************/
    if ( cols1 != rows2 ) {
	cout << "\nMatrices are not compatible\n";
	exit(0);
    }
    int c[100][100];
    for(i=0;i<rows1;i++)
    {
	for(j=0;j<cols2;j++)
	{
		c[i][j] = 0;
		for ( int k = 0; k < rows2; k++ ) {
			c[i][j] += a[i][k]*b[k][j];
		}
	}
    }
/*********************output****************************/
  for(i=0;i<rows1;i++)
  {

	for(j=0;j<cols2;j++)
	{
		cout<<c[i][j]<< " ";
	}
	cout << "\n";
  }
  getch();
}
