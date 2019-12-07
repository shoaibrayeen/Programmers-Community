#include <iostream>

int main(){
    char ch;
    std::cout<<"Enter a character ";
    std::cin>>ch;
    if(ch=='a'||'e'||'i'||'o'||'u')
        std::cout<<"Vowel";
    else
    {
        std::cout<<"Not a vowel";
    }
    return 0;
}
