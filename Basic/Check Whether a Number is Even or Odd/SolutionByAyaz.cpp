#include <iostream>
using namespace std;
int main()
{
  long long int a;
  cout << "Enter a number" << endl;
  cin >> a;
  if (a % 2)
    cout << a << " is odd." << endl;
  else
    cout << a << " is even." << endl;
  return 0;
}
