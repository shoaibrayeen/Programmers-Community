//program to producr largest no. from int ele. of array
	#include <iostream>
	#include <string>
	#include <vector>
	#include <algorithm>
	using namespace std;

int Compare(string X, string Y)
	{
	    string XY = X.append(Y);
	    string YX = Y.append(X);
	 	if (XY > YX)
	 		return 1;
	 	else
	 		return 0;
	}
	
  int main()
	{
	    string shi[100]; 
		int v; 
	    cout<<"Enter the size of array:  ";
	    cin>>v;
	    cout<<"Enter the elements of the array: ";
	    for(int i=0;i<v;i++) 
	    cin>>shi[i];
	   sort(shi, shi+v, Compare);
	 	for (int i=0; i <v ; i++ )
	        cout << shi[i];
	   return 0;
	}
