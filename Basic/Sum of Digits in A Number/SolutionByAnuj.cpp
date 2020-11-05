    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
    	int n;
    	cin>>n;
    	int sum = 0;
    	while(n != 0){
    		sum += n%10;
    		n /= 10;
    	}
    	cout<<sum<<endl;
    	return 0;
    }
