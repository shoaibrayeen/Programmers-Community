#include <iostream>

int main()
{
    char ch;
    std::cout << "Enter a character ";
    std::cin >> ch;
    if (ch < 91) {
        ch += 32;
    }
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        std::cout << "Vowel\n";
    } else {
        std::cout << "Not a vowel\n";
    }
    return 0;
}
