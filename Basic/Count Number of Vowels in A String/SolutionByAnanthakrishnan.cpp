  
#include <iostream>          // Header Files 
#include <string>
using namespace std;

int numberOfVowels(string str)
{
    int count = 0;
    for(int i = 0;i<str[i] != '\0';i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i' || str[i] == 'o' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    return count;
}


int main()
{
    string str;
    cout << "Enter String:" << endl;
    cin >> str;
    cout << "Number of vowels in a string is: " << numberOfVowels(str);

  return 0;
}
