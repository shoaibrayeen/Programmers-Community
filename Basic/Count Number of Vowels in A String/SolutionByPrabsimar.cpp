#include <iostream>
using namespace std;

int main()
{
    char charr[100];
    int c = 0;
    cout<<"string: ";
    cin >> charr;

    for (int i = 0; charr[i] != '\0'; i++) 
    {
        if (charr[i] == 'a' || charr[i] == 'A' || charr[i] == 'e' || charr[i] == 'E' || charr[i] == 'i' || charr[i] == 'I' || charr[i] == 'o' || charr[i] == 'O' || charr[i] == 'u' || charr[i] == 'U')
            c++;
    }
    cout <<"vowels: " <<c;
}
