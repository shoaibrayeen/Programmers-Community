#include<bits/stdc++.h>
using namespace std;
vector<int> Largest3(vector<int> input, int n){
	vector<int> output(3,INT_MIN);
	
	for(int i=0;i<n;i++){
		if(input[i]>output[0]){
			output[2]=output[1];
			output[1]=output[0];
			output[0]=input[i];
		}
		else if(input[i]>output[1]){
			output[2]=output[1];
			output[1]=input[i];
		}
		else if(input[i]>output[2]){
			output[2]=input[i];
		}
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
    	
    	vector<int> output = Largest3(input, n);
    
    	for(auto i:output)
		cout<<i<<" ";
	cout<<endl;
    	return 0;
}
