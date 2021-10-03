#include <bits/stdc++.h>
using namespace std;

int find(int A[], int B[], int m,
		int n, int k_req)
{
	int k = 0, i = 0, j =0;
	int t=0;
	while(i < m && j < n)
	{
		if(A[i] < B[j])
		{
			k++;
			if(k == k_req){
			t=A[i];
			break;
			}
			i++;
		}
		else
		{
			k++;
			if(k == k_req){
				t=B[j];
				break;
		    
		}
			j++;
		}
	}
	while(i < m)
	{
		k++;
		if(k == k_req){
			t=A[i];
			break;
	}
		i++;
	}
	while(j < n)
	{
		k++;
		if(k == k_req){
			t=B[j];
			break;
		}
		j++;
	}
	return t;
}   

int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	int A[n];
	int B[m];
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
    for(int i=0;i<m;i++){
	    cin>>B[i];
	}

	int k;
	cin>>k;
	cout << find(A, B, n, m, k);
	
	return 0;
}

