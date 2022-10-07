#include<bits/stdc++.h>
using namespace std;


vector<int> antiDiagonalPattern(vector<vector<int>>&matrix) 
    {
        vector<pair<int,int>>arr;
        int n = matrix.size();
        int m= matrix[0].size();
       
       for(int j  = 0;j<m;j++){
           arr.push_back({0,j});
       }
        for(int i = 1;i<n;i++){
           arr.push_back({i,m-1});
       }
       vector<int>temp;
       for(auto x : arr){
           int i = x.first;
           int j = x.second;
           
           while(i<n && j>=0){
               temp.push_back(matrix[i][j]);
               i++;
               j--;
           }
       }
       return temp;
    }
    
    

void print(vector<int>&arr){
	for(auto x : arr){
	
			cout<<x<<" ";
	}
}


int main(){
    vector<vector<int>>matrix;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
    	vector<int>temp;
    	for(int j = 0;j<n;j++){
    		int val ;
    		cin>>val;
    		temp.push_back(val);
		}
		matrix.push_back(temp);
	}
    vector<int>ans;
	ans = antiDiagonalPattern(matrix);
	cout<<"AntiDiagonal Pattern   : \n";
	print(ans);
	return 0;
}

