#include <iostream>
#include<cctype>
using namespace std;

int main() {
    char v;
    cout<<"Enter the character: ";
    cin>>v;
    
    int check = isalpha(v);
    
    if (check == 0)
    {
        cout << "Not an Alphabet";
    }
    else
    {
        if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' || v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U')
        {
        cout << "It is a Vowel";
        }
        else
        {
        cout << "It is a consonent";
        }
    }
    return 0;
}
