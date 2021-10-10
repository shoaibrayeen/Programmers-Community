#include <conio.h>
#include <iostream.h>
void voc(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;
}

int main()
{
    clrscr();
    char t;
    cout << "Enter the character" << endl;
    cin >> t;
    voc(t);
    getch();
    return 0;
}
