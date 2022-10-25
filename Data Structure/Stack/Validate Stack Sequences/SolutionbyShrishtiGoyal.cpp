#include <iostream>
#include <stack>
 
using namespace std;
 
// Function to check validity of stack sequence
bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
  int i = 0, j = 0;
  for(auto x : pushed)
  {
      pushed[i] = x;
      while(i > -1 and j < popped.size() and pushed[i] == popped[j])
      {
          i--;
          j++;
      }
      i++;
  }
  if(j == popped.size())
      return true;
  return false;
}
int main()
{
   // pushed = [1,2,3,4,5], popped = [4,5,3,2,1]    =>  true
   // pushed = [1,2,3,4,5], popped = [4,3,5,1,2]    => false
   vector<int>pushed, popped;
   int n, a
   cout << "Enter the size of the arrays: ";
   cin >> n;
   cout << "Enter the elements of pushed array";
   for(int i = 0; i < n ; i++)
   {
     cin >> a;
     pushed.push_back(a);
   }
   cout << "Enter the elements of popped array";
   for(int i = 0; i < n ; i++)
   {
     cin >> a;
     popped.push_back(a);
   }
   cout << (validateStackSequence(pushed, popped) ? "True" : "False");
    
   return 0;
}
