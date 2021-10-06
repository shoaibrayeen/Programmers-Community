#include <iostream>
using namespace std;

int mini(int a[], int n)
{
    int min = a[0];
    for(int i = 0;i < n;i++)
    {
        if(a[i] < min)
           min = a[i];
    }
   return min;
}

int main()
{
    int size;
    cout << "Enter size:" << endl;
    cin >> size;
    int a[size];
    cout << "\nEnter elements:" << endl;
    for(int i = 0;i < size;i++)
       cin >> a[i];

    cout << "\n Minimum element: " << mini(a,size);
  return 0;
}
