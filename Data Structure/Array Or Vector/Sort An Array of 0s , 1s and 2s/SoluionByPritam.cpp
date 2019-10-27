#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int count0=0; 
	    int count1=0;
	    int count2=0;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int j=0;j<n;j++)
	    {
	        if(arr[j]==0)
	        {
	            count0++;
	        }
	        if(arr[j]==1)
	        {
	            count1++;
	        }
	        if(arr[j]==2)
	        {
	            count2++;
	        }
	        
	    }
while(count0--)
cout << 0 << " ";
while(count1--)
cout << 1 << " ";
while(count2--)
cout << 2 << " ";

cout<<"\n";


	}	    
	
	return 0;
}
