// Program to check if entered year is a leap year.
// Author: Gourav Khunger(https://github.com/GouravKhunger)

#include <iostream>
using namespace std;

bool isLeap(int year) {
	if (year % 400 == 0)
		return true;
	else if (year % 100 == 0)
		return false;
	else if (year % 4 == 0)
		return true;
	return false;
}

main(){
  ios::sync_with_stdio(false);
  int year;
  cin>>year;
  if(isLeap(year)){
    cout<<"Yes";
  } else {
    cout<<"No";
  }
}
