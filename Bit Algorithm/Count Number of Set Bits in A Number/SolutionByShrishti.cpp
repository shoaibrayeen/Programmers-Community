#include <bits/stdc++.h>
using namespace std;
// to count no of set bits in an integer
long long setBits(int n)
{
	long long count=0;
	while(n)
  	{
		n &= n-1;
    		count++;
  	}
      	return count;
}
int main()
{
	
	int number;
	// input the integer
	cin>>number;
	cout<<setBits(number)<<endl;
	return 0;
}
