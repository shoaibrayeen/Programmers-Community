#include <iostream>
#include <cmath>

float abs(float num)
{
  if (num < 0)
    return num - (num * 2);
  return num;
}

int numLength(float num)
{
  num = abs(num);
  if (num < 10)
    return 1;
  
  int len;
  while (num > 1)
  {
    num = num / 10;
    len++;
  }
  return len;
}

int main()
{
  float num;
  std::cout << "Enter a number: ";
  std::cin >> num;
  std::cout << "Len: " << numLength(num);
}
