#include <iostream>
#include <string>
void AppendIfBit(int decimal, int bit, std::string& str)
{
  if (decimal & bit)
    str += '1';
  else
    str += '0';
  
}

std::string DecimalTo8BitBinary(int decimal)
{
  std::string binary;
  AppendIfBit(decimal, 0x01, binary);
  AppendIfBit(decimal, 0x02, binary);
  AppendIfBit(decimal, 0x04, binary);
  AppendIfBit(decimal, 0x08, binary);
  AppendIfBit(decimal, 0x1, binary);
  AppendIfBit(decimal, 0x2, binary);
  AppendIfBit(decimal, 0x4, binary);
  AppendIfBit(decimal, 0x8, binary);
  return binary;
}

int main() {
  int decimal;
  std::cout << "Enter a number: ";
  std::cin >> decimal;
  std::cout << DecimalTo8BitBinary(decimal);
} 
