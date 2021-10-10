#include <algorithm>
#include <iostream>
#include <time.h>
using namespace std;

void shuffleArray(int arr[], int n)
{
    srand(time(NULL));
    for (int i = n - 1; i > 0; i--) {
        int index = rand() % (i + 1);
        swap(arr[i], arr[index]);
    }

    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    shuffleArray(arr, n);
    return 0;
}