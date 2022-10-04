#include<bits/stdc++.h>
using namespace std;

int totalOnes(int arr[],int n) {
    int ans = 0;
    //traversing through array
    for (int i = 0; i < n; i++) {
      //found 1 in array for the first time
      if (arr[i] == 1) {
        ans = n - i;
        break; // exit from loop as we found answer
      }
    }

    return ans;

  }
int main() 
{
    int binaryArray[] = {0,0,0,1,1,1};
    cout<<"Total number of 1's: "<<totalOnes(binaryArray,6);
}
