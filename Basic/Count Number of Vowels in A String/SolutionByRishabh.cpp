#include <iostream>
using namespace std;

int main()
{
    char ch[100];
    int count = 0;
    cin >> ch;

    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' || ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'u' || ch[i] == 'U')
            count++;
    }

    cout << count;
}
