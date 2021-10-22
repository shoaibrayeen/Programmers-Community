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
  int fact=1;
  while(a>0){
    fact=fact*a;
    --a;
  }
  cout<<"Factorial: ";
  cout<<fact;
}
