//to display the sum of two matrices
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
/*******************input********************************/
  int rows,cols,i, j, a[100][100];
  cout<<"enter the rows and columns "<<endl;
  cin>>rows>>cols;
  cout<<"enter the elements of the 1st matrix "<<endl;
  for(i=0;i<rows;i++)
  {
	for(j=0;j<cols;j++)
	{
		cin>>a[i][j];
	}
  }
  cout<<"enter the elements of the 2nd matrix \n";
  int b[100][100];
  for(i=0;i<rows;i++)
  {
	for(j=0;j<cols;j++)
	{
		cin>>b[i][j];
	}
  }
/********************logic*******************************/
    int c[100][100];
    for(i=0;i<rows;i++)
    {
	for(j=0;j<cols;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
    }
/*********************output****************************/
  for(i=0;i<rows;i++)
  {

	for(j=0;j<cols;j++)
	{
		cout<<c[i][j]<< " ";
	}
	cout << "\n";
  }
  getch();
}
