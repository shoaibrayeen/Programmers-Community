#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int T,i;
	cin>>T;
	while(T--){
		long long int p,c=0,f=0,X,N,k;
		cin>>N>>X>>p>>k;
		long long int A[N];
		for(i=0;i<N;i++){
			cin>>A[i];
			if(A[i]==X){
				f=1;
			}
		}
		if(f==0){
			cout<<"-1"<<endl;
		}
		else{
			while(A[p-1]!=X){
				if((k-1)==X){
					c = -1;
					break;
				}
				sort(A,A+N);
				A[k-1] = 0;
				c++;
				if((k-1)==0){
					c = -1;
					break;
				}
			}		
			if(c==-1){
				cout<<"-1"<<endl;
			}
			else{
			cout<<(c-1)<<endl;
		}}
	}	
}
