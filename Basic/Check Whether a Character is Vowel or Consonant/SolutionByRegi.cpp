#include <iostream>
#include <string>

char vowels[5] = {'a', 'e', 'i','o','u'};

bool IsVowel(char c)
{
  for (int i = 0; i < 5; i++)
  {
    if (tolower(c) == vowels[i])
      return true;
  }
  return false;
}

int main() {
  char Character;
  std::cout << "Enter a character: ";
  std::cin >> Character;
  std::cout << Character << " is a " << (IsVowel(Character) ? "Vowel" : "Consonant") << "\n";
} 
