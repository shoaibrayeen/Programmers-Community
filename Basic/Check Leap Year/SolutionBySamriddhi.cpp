/*An Year as input is given and You need to check that it's leap year or not.
  Input : Year
  Output: 'Yes' if Leap Year, 'No' Otherwise */
  
#include <iostream>
using namespace std;

void leap(int year)
{
	if( (year%100 == 0 && year%400 == 0) || (year%100!=0 && year%4 == 0) )
		cout<<"Yes";     //It is leap year
	else
		cout<<"No";      //It is not leap year
	
	return;
}
int main() {
	int yr;  
	cin>>yr;       //Enter year to be checked
	leap(yr);      //Checking function called
	
	return 0;
}
