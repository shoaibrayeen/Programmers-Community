//using algorithm headerfile and calling a predefined function reverse
#include<iostream>
#include<string.h> 
#include<algorithm>
using namespace std;
string shi;
void rev_str(string )
{ 
reverse(shi.begin(),shi.end());
}
int main()
{ 
cout<<"Enter the String to be Reversed: ";
cin>>shi; 
rev_str(shi);
cout<<"\nReverse of string in input is: "<<shi;
return 0;
}
