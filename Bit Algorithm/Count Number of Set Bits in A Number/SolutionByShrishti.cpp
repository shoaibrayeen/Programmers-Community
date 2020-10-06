#include <bits/stdc++.h>
using namespace std;
long long setBits(int n){
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
	cin>>number;
	cout<<setBits(number)<<endl;
	return 0;
}
