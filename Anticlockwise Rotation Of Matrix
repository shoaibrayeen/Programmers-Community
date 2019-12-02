/*rotate a 3X3 matrix elements by 90 degrees anticlockwise */
#include<iostream>
using namespace std;
int main ()
{
    int arr[3][3];
    int res[3][3];
    cout<<"\nEnter the elements of a 3*3 matrix ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\nThe original matrix is \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            res[i][j]=arr[j][i];
        }
    }
    for(int col=0;col<3;col++)
    {
        for(int k=0,p=2;k<p;k++,p--)
        {
            int temp= res[k][col];
            res[k][col]=res[p][col];
            res[p][col]=temp;
        }
    }
    cout<<"\nThe final matrix after 90 degrees rotation is \n";
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           cout<<res[i][j]<<" ";
       }
       cout<<endl;
   }
}
