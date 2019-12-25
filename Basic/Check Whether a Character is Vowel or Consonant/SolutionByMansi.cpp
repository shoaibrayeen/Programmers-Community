#include <iostream>
using namespace std;


// Function to check for a vowel or consonant

void check(char alpha) 
{ 
    if (alpha == 'a' || alpha == 'e' || alpha == 'i' ||  alpha == 'o' || alpha == 'u' || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U') 
        cout << "The alphabet entered is a vowel" << endl; 
    else if((alpha>=65 && alpha<=90)||(alpha>=97 && alpha<=122))
        cout<<"The alphabet is a consonant" << endl; 
    else if(alpha>=48 && alpha<=57)
        cout<<"The character is a digit" << endl;
    else
        cout<<"This is a special character"<<endl;
} 
  
  
int main() 
{ 
    char a;
    cout<<"Enter the character"<<endl;
    cin>>a;
    check(a);
    return 0;
} 
