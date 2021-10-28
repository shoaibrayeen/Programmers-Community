#include <iostream>
#include <string>

bool IsEven(int num)
{
  return (num % 2 == 0);
}

int main() {
  int num;
  std::cout << "Enter a number: ";
  std::cin >> num;
  std::cout << num << " is " << (IsEven(num) ? "Even" : "Odd") << "\n";
} 
