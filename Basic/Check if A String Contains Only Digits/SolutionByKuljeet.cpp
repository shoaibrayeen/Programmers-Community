#include <iostream>
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


int main()
{
    string str;
    cout << "Enter String:" << endl;
    cin >> str;
    if(digits(str))
      cout << "\nYes" << endl;
    else
      cout << "\nNo";
    
  return 0;
}