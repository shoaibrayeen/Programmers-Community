#include<iostream>
using namespace std;

int binaryTodecimal(int bnum){
	int ans = 0;
	int pow = 1;

	while(bnum!=0){
		int rem = bnum%10;
		bnum = bnum/10;

		ans=ans+(rem*pow);
		pow=pow*2;
	}
	return ans;

}
int main(){

   
    
    int bnum ;
    cout<<"enter binary no.";
    cin>>bnum;
	int dvalue = binaryTodecimal(bnum);
	cout<<dvalue;
	//int srcBase;

}
