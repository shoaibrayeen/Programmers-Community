#include <iostream>
using namespace std;
void knapsack(int max,int w[],int v[],int n)                    //Knapsack function assigns the values into a matrix by tabular method
{
	  int k[n+1][max+1];
	  int i,j;
	  for(i=0;i<=n;i++)
	  {
		    for(j=0;j<=max;j++)
		    {
			      if(i==0||j==0)
			      {
				        k[i][j]=0;
			      }
			      else if(w[i-1]<=max)
			      {
				
				        if(k[i-1][j]>=(k[i-1][j-w[i-1]]+v[i-1]))
				        {
					          k[i][j]=k[i-1][j];
				        }
				        else
				        {
					          k[i][j]=k[i-1][j-w[i-1]]+v[i-1];
				        }
			      }
			      else
			      {
				        k[i][j]=k[i-1][j];
			      }
		    }
	}
	cout<<"Maximum profit of knapsack is: "<<k[n][max];
}
int main() 
{
	  int a,d;
	  cout<<"Enter the size: \n";
	  cin>>a;
	  int b[a+1],c[a+1];
	  cout<<"Enter the weights: \n";
	  for(int i=0;i<a;i++)
	  {
		    cin>>b[i];
	  }
	  cout<<"Enter the profits: \n";
	  for(int j=0;j<a;j++)
	  {
		    cin>>c[j];	
	  }
	  cout<<"Enter the max weight of knapsack: \n";
	  cin>>d;
	  knapsack(d,b,c,a);
	  return 0;
}
