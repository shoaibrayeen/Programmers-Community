//reverse of a string
#include <conio.h>
#include <iostream.h>
#include <stdio.h>
class string {
    char str[100];

public:
    void input();
    void swap(char&, char&);
    int length();
    void rev_string();
};
void string::input()
{
    cout << "enter the string ";
    gets(str);
}
int string::length()
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}
void string::swap(char& a, char& b)
{
    char temp = a;
    a = b;
    b = temp;
}
void string::rev_string()
{
    int size = length();

    int j = size - 1;
    for (int i = 0; i < size / 2; i++) {
        swap(str[i], str[j]);
        j--;
    }
    cout << "the reversed string is " << str;
}

void main()
{

    clrscr();
    string obj;
    obj.input();
    obj.rev_string();
    getch();
}
