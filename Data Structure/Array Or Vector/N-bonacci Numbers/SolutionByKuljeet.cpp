#include <iostream>
using namespace std;

void NbonacciSeries(long n, int m)
{
    int arr[m] = {0};
    arr[n-1] = 1;
    arr[n] = 1;

    for(int i = n+1;i < m;i++)
       arr[i] = 2*arr[i-1] - arr[i-n-1];
    
    for(int i = 0;i < m;i++)
       cout << arr[i] << " ";
}

int main()
{
    long n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    int m;
    cout << "Enter the no. elements in " << n << "-bonacci series you want:" << endl;
    cin >> m;
    NbonacciSeries(n,m);
    return 0;
}