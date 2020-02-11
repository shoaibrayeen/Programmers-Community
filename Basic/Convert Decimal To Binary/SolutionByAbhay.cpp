#include<bits/stdc++.h>
using namespace std;
int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int bin;
		if(n<0){
			cout<<"Enter a valid number";
		}
		else if(n==0){
			cout<<n;	
		}
		else
		bin=convert(n);
		cout<<bin<<endl;		
	}

	return 0;
}