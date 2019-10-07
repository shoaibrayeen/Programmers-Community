#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
	
	string num1 = to_string(a) + to_string(b);
	string num2 = to_string(b) + to_string(a);
	
	return num1>num2;
}
vector<int> MaxNumberByJoin(vector<int> input){
	
	sort(input.begin(), input.end(),cmp);
	return input;
	
}

int main()
{    
	int n;
	cin>>n;
	vector<int> input(n);
    	for(int i=0;i<n;i++)
    		cin>>input[i];
    	
    	vector<int> output = MaxNumberByJoin(input);
	
	for(int i=0;i<n;i++)
		cout<<output[i];
	cout<<endl;

	return 0;
}
