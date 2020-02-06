#include<iostream>
#include<string.h>
using namespace std;

int main(){

   int left = 0, right, flag = 0;
   char str[1000];

   cout<<"Enter String to check palindrome."<<endl;
   cin>>str;

   right = strlen(str)-1; 
  
   while(right > left) { 
     if(str[left++] != str[right--]) { 
        flag = 0;
   } 
   else { 
     flag = 1;
     }
   }

   if(flag == 1) {
     cout<<str<<" is palindrome"<<endl;
   }
   else {
     cout<<str<<" is not palindrome"<<endl; 
   }
   return 0;
}
