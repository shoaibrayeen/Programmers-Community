#include <iostream> //Header Files 
#include <string>
using namespace std;

bool digits(string str)
{
    int k = 0;
    for(int i = 0;i < str.length();i++)
    {
        if(isdigit(str[i]))
           k++;
    }

    if(k == str.length())
      return true;

    else
      return false;
}


int main() // Driver Code
    string str;
    cout << "Enter String:" << endl;
    cin >> str;
    if(digits(str))
      cout << "\n Yes" << endl;
    else
      cout << "\nNo";
    
  return 0;
}
