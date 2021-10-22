#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main(){
  int a;
  cout<<"Enter Number: ";
  cin>>a;
  int chk=0,b=a;
  while(b>0){
    if(a%b==0){
      chk+=1;
    }
    b-=1;
  }
  
  if(chk==2){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
