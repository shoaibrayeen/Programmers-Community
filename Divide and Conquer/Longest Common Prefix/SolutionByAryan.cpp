#include<bits/stdc++.h>
using namespace std;

string commonPrefix(string str1, string str2)	{
	int n1 = str1.length();
	int n2 = str2.length();
	string result = {};
	for(int i=0,  j=0; i<n1 && j<n2; ++i, ++j)	{
		if(str1[i]!=str2[j])
			break;
		result.push_back(str1[i]);
	}
	return result;
}

string compare(string arr[],int low,int high)	{
	if(low==high)
		return arr[low];
	else	{
		int mid = low + (high-low)/2;

		string str1 = compare(arr, low, mid);
		string str2 = compare(arr, mid+1, high);

		return commonPrefix(str1, str2);
	}
}

int main() 
{ 
    string arr[] = {"geeksforgeeks", "geeks", 
                    "geek", "geezer"}; 
    int n = sizeof (arr) / sizeof (arr[0]); 
  
    string ans = compare(arr, 0, n-1); 
  
    if (ans.length()) 
        cout << "The longest common prefix is "
             << ans; 
    else
        cout << "There is no common prefix"; 
    return (0); 
} 