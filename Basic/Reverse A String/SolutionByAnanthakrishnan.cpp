#include <iostream>       //Header Files 
#include <string>
using namespace std;

void reverseString(string& str)
{
    int n = str.length();
    for(int i = 0;i < n/2;i++)
    {
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
}

int main()          // Driver Code 
{
    string str;
    cout << "Enter String" << endl;
    cin >> str;
    reverseString(str);
    cout << str;
   return 0; 
}
