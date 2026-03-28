#include <iostream>

int main() {
    char value;
    std::cout<<"enter the character you want to check? ";
    std::cin>>value;
    if(value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u' || value == 'A' || value == 'E' || value == 'I' || value == 'O' || value == 'U')
    {
        std::cout << "It is a Vowel";
    }
    else
    {
        std::cout << "It is a consonent";
    }

    return 0;
}
