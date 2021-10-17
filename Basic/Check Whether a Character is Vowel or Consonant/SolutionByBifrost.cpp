#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main(){
  string a;
  cout<<"Enter Character: ";
  cin>>a;
  if(a=="A" || a=="E" || a=="I" || a=="O" || a=="U" || a=="a" || a=="e" || a=="i" || a=="o" || a=="u"){
    cout<<"Input Character is a Vowel";
  }
  else{
    cout<<"Input Character is a not a Vowel";
  }
}
