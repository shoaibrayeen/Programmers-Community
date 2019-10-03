#include<bits/stdc++.h>
using namespace std;
vector<int> ZigZag(vector<int> input, int n){
	
	for(int i=0;i<n-1;i++){
		
		if(i%2==0 && input[i]>input[i+1])
			swap(input[i],input[i+1]);
			
		else if (i%2==1 && input[i]<input[i+1])
			swap(input[i],input[i+1]);		
	}
	return input;
	
}
int main()
{    
    int n;
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++)
      cin>>input[i];
    
    vector<int> output = ZigZag(input, n);

    for(auto i:output)
      cout<<i<<" ";
    cout<<endl;
    return 0;
}
