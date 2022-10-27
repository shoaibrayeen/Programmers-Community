#include <bits/stdc++.h>
using namespace std;

// majority element in the array
int majorityElement(vector<int>& nums) {
  int n = nums.size();
  int ans = nums[0];
  int c = 1;
  for(int i = 1; i < n; i++)
  {
      if(nums[i] == ans)
          c++;
      else{
          c--;
          if(c == 0)
          {ans = nums[i];
           c++;
          }
      }
  }
  return ans;
}

int main()
{
    int n,a;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
   vector<int> nums;
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      nums.push_back(a);
    }

    cout << "Index of Majority element is: " << majorityElement(nums);
    return 0;
}
