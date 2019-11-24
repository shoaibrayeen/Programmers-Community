#include<iostream.h>
#include<conio.h>
#include<process.h>
void input(int a[10][10], int r1, int c1);
void multiplied(int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int r2, int c2);
void display(int a[10][10], int r1, int c1);
{
 for(int i=0;i<r1;i++)
 for(int j=0;j<c1;j++)
  cout<<a[i][j];
void main()
{

 int a[10][10], b[10][10],multiply[10][10], r1,c1,r2,c2;
 cout<<"Enter rows and columns in first matrix";
 cin>>r1>>c1;
 cout<<"Enter rows and columns in second matrix";
 cin>>r2>>c2;
 if(c1!=r2)
  {
    cout<<"Multiplication cannot be possible";
    exit(0);
    }
 cout<<"Enter first matrix";
 input(a,r1,c1);
 cout<<"Enter second matrix";
 input(b,r2,c2);
 multiplied(a,b,multiply,r1,c1,r2,c2);
 cout<<"Multiplied matrix";
 display(multiply,r1,c2);
 getch();
}

void input(int a[10][10], int r1, int c1)
{
 for(int i=0;i<r1;i++)
 {
  for(int j=0;j<c1;j++)
   {
     cout<<"\nEnter Elements";
     cin>>a[i][j];
     }
  }
}

void display(int a[10][10], int r1, int c1)
{
 for(int i=0;i<r1;i++)
 for(int j=0;j<c1;j++)
  cout<<a[i][j];
}


void multiplied(int a[10][10], int b[10][10], int multiply[10][10], int r1, int c1, int r2, int c2)
{
 multiply[10][10]=0;
  for(int i=0;i<r1;i++)
  {
   for(int j=0; j<c2;j++)
    {
     for(int k=0;k<c1;k++)
     {
       multiply[i][j] += a[i][k]*b[k][j];
       }
    }
  
 }
   
 }
