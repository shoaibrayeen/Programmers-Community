/*
  Program Description - This program to check if a number is power of two.
  Time Complexity: O(1)
  Space Complexity: O(1)
  Solution Description: If we go by iterative approach to solve this problem the time complexity 
  would be O(log N), which can be reduced using bitwise operators. 
  So for a number X which is a power of two, bitwise & opertaion of 
  X & (X-1) will be 0.The program below checks if number is power of 2 by this property. 
*/



#include <iostream>
using namespace std;

bool isNumPositive(int num){
    return num > 0;
}

bool isAndZero(int num){
    return !(num & (num - 1));
}

int main(){
int no;
cout<<"Enter a  number "<<endl;
cin>>no;

(isNumPositive(no) && isAndZero(no)) ? cout<<"Number is power of 2" : cout<<"Number is not power of 2";  
}