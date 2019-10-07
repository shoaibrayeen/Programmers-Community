#include<iostream>
using namespace std;

int main(){

  int arr[1000],num,i=0;

  cout<<"Enter number: "<<endl;
  cin>>num;
  
  while(num!=0){
	arr[i]=num%2;
	num=num/2;
	i++;
  }
  
  cout<<"Binary of given number: "<<endl;
		
  for(int j=i-1;j>=0;j--){
	cout<<arr[j];
	}	
  cout<<"\n";    
  return 0;
}
