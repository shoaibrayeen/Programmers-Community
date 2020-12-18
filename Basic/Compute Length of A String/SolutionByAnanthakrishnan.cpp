#include <iostream>  // Header Files
#include <string>
using namespace std;

int main()        // Driver Code 
{
    string S;
    cout << "Enter String:" << endl;
    cin >> S;
    int len = 0;
    for(int i = 0; S[i] != '\0'; i++)
        len++;

    cout << len;
    return 0; 

}
