#include <iostream>
using namespace std;
void reverse(int a[],int size)
{
	for(int i=0; i<size; i++)
	{	
		int j=0;
		int k=0;
		while(k<size)
		{
          if(a[i]==a[k])
          {
              j++;
          }
          k++;
    }
      if(j==1)
      {
          cout<<a[i];
		  }
	}
}
int main() 
{
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;
    cout<<endl;
    int g[s];
    cout<<"Enter the array: ";
    for(int i=0; i<s; i++)
    {
        cin>>g[i];
    }
    cout<<endl;
    reverse(g,s);
    return 0;
}
