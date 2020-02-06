#include <bits/stdc++.h>

 
 int factorial(int a){
 	if(a==1 || a==0){
 		return 1;
 	}
 	return a*(factorial(a-1));

 }


 int main(){
 	int t;
 	std::cin>>t;
 	while(t--){
 		int a;
 		std::cin>>a;
 		int b=factorial(a);
 		std::cout<<b<<std::endl;
 	}
 	return 0;
 }