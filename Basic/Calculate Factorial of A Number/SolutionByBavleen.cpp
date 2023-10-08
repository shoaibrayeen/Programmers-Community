#include <iostream>
int main() 
{
int num;  
std::cout<<"Enter a number: ";
std::cin>>num;
  int result=1;
  while(num>0)
  {
      result = result*num;
      num--;
  }
  std::cout<<result;
}
