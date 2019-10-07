#include<bits/stdc++.h>
using namespace std;
vector<int> Rearrange(vector<int> input, int n){
	
	vector<int> output(n);
	sort(input.begin(),input.end());
	
	int i=0,j=n-1,in=0;
	while(i<=j){
		output[in++]=input[i];
		if(i!=j)
		output[in++]=input[j];
		i++,j--;
	}
	
	return output;
	
}
int main()
{    
    int n;
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++)
      cin>>input[i];
    	
    vector<int> output = Rearrange(input, n);

    for(auto i:output)
      cout<<i<<" ";
    cout<<endl;
    return 0;
}
