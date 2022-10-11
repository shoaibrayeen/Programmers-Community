#include <iostream>
using namespace std;
/*
Time Complexity : O(N)
Space Complexity: O(1)
*/
int countOnes(int a[], int n)
{
    int count = 0;
    for(int i=0;i<n;i++){
      if(a[i]==1){
        count++;
       }
    }
    return count;
}

int main()
{
    int size;
    cout << "Enter size:" << endl;
    cin >> size;
    int a[size];
    cout << "Enter elements:" << endl;
    for(int i = 0;i < size;i++)
       cin >> a[i];

    cout << "No. of 1's in the entered array are: " << countOnes(a,size);
    return 0;
}
