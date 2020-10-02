#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main() {
    string str;
    cout<<"Enter the String : ";
    cin >> str;
    for( int i = 0; i <  int(str.length())/2; i++ ) {
        swap(str[i] , str[int(str.length()) - 1 - i]);
    }
    cout<<"Reverse of String\t:\t" << str << "\n";
}
