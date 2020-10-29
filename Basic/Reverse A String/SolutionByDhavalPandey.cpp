#include<iostream>
#include<string.h>
using namespace std;

int main(){
   int i=0,j,l;
   char line[1000], temp;

   cout<<"Input String: "<<endl;
   cin>>line;
   cout<<"Original string: "<<line<<endl;

	 j=strlen(line)-1;
	 while(i<j) {
		 temp=line[i];
		 line[i]=line[j];
		 line[j]=temp;
		 i++;
		 j--;
	 }

   cout<<"Reverse string : "<<line<<endl;

   return 0;
}
