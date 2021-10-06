#include <iostream>
using namespace std;

int countOnes(int a[], int n)
{
    int l = 0, h = n-1;
    while(l <= h)
    {
        int m = (l + h)/2;
        if(a[m] == 0)
           l = m+1;
        
        else
        {
            if(m == 0 || a[m-1] != a[m])
                return (n-m);
            else
                h = m-1;
        }
    }
    return -1;
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
