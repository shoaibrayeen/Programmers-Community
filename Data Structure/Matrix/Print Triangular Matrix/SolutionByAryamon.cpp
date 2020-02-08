//class+matrix program
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
class arr2D
{
  int a[100][100];
  int m,n;
  public:
  void create2D();
  void show2D();
  void show2D_lower1();
  void show2D_lower2();
  void show2D_upper1();
  void show2D_upper2();
  void show_diagonal1();
  void show_diagonal2();
};
void arr2D::create2D()
{
  cout<<"\nEnter the dimensions of the matrix\n ";
  cin>>m>>n;
  cout<<"\nEnter the elements of the array\n ";
  for(int i=0;i<m;i++)
  {
  for(int j=0;j<n;j++)
  {
   cin>>a[i][j];
  }
  }
}
void arr2D::show2D()
{
  for(int i=0;i<m;i++)
  {
	 for(int j=0;j<n;j++)
	{
		cout<<a[i][j] << "  ";
	}
	cout << endl;
  }
}
void arr2D::show2D_lower1()
{
    for(int i=0;i<n;i++)
    {
	for(int j=0;j<n;j++)
	{
		if(i>=j)
		{
			cout<< a[i][j]<<" ";
		}
	}
	cout<<endl;
    }

}
void arr2D::show2D_lower2()
{
    for(int i=0;i<n;i++)
    {
	for(int j=0;j<n;j++)
	{
		if(i+j >= m - 1)
		{
			cout<< a[i][j]<<" ";
		}
		else
		{
			cout << "  ";
		}
	}
	cout<<endl;
    }

}

void arr2D::show2D_upper1()
{
    for(int i=0;i<n;i++)
    {
	for(int j=0;j<n;j++)
	{
		if(i<=j)
		{
			cout<< a[i][j]<<" ";
		}
		else
		{
			cout << "  ";
		}
	}
	cout<<endl;
    }

}
void arr2D::show2D_upper2()
{
    for(int i=0;i<n;i++)
    {
	for(int j=0;j<n;j++)
	{
		if(i+j <= m -1)
		{
			cout<< a[i][j]<<" ";
		}
	}
	cout<<endl;
    }

}
void arr2D::show_diagonal1()
{
    for(int i=0;i<n;i++)
    {
	cout << a[i][i] << "  ";
    }

}
void arr2D::show_diagonal2()
{
    for(int i=0;i<n;i++)
    {
	cout << a[i][m-1-i] << "  ";
    }

}

void main()
{
  int ch;
  arr2D obj;
  clrscr();
  while(1)
  {
	cout<<"\n****MENU DRIVEN PROGRAM*****\n ";
	cout<<"\n1.create\n2.show\n3.Lower 1\n4.Lower 2"
	<<"\n5.Upper 1\n6.Upper 2\n7.Diagonal 1\n8.Diagonal 2"
	<< "\n9.exit\n";
	cout<<"\nEnter your option\n ";
	cin>>ch;
	switch(ch)
	{
	case 1: obj.create2D();
		break;
	case 2: cout << "\n2D Matrix\n";
		obj.show2D();
		break;
	case 3: cout << "\nLower 1 - Matrix\n";
		obj.show2D_lower1();
		break;
	case 4: cout << "\nLower 2 - Matrix\n";
		obj.show2D_lower2();
		break;
	case 5: cout << "\nUpper 1 - Matrix\n";
		obj.show2D_upper1();
		break;
	case 6: cout << "\nUpper 2 - Matrix\n";
		obj.show2D_upper2();
		break;
	case 7: cout << "\nDiagonal 1\t";
		obj.show_diagonal1();
		break;
	case 8: cout << "\nDiagonal 2\t";
		obj.show_diagonal2();
		break;

	case 9: exit(0);
	default: cout << "\nInvalid Choice\n";

	}
  }
  getch();
}
