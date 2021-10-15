#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

int year_chk(int yr){
  if(yr%400==0){
    return 1;
  }
  else if(yr%100!=0 && yr%4==0){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  int year_input;
  cout<<"Enter Year: ";
  cin>>year_input;
  int choice;
  choice=year_chk(year_input);
  if (choice==1){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }

}
