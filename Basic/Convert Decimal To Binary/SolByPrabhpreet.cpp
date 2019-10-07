#include<bits/stdc++.h>
using namespace std;

void decimal_binary(int num)
{
  int a = 0, pow = 1;
  vector<int> arr;

  while (num > 0)
  {
    int rem = num % 2;
    num /= 2;
    arr.push_back(rem);
  }

  for (int i = arr.size() - 1; i >= 0; i--)
  {
    cout << arr[i];
  }

  return;
}

int main()
{

  int num = 0;
 
  std::cout << "Enter the number: ";
  std::cin >> num;
 
  std::cout << "Binary equivalent: ";
  decimal_binary(num);
  std::cout << std::endl;

  return 0;
}
