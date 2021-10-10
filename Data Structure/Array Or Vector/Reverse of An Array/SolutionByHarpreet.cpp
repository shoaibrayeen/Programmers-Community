// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/* Utility function to print an array */
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

/* Driver function to test above functions */
int main()
{
    System.out.println("Enter the size of the Array");
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[n];
    System.out.println("Enter the values of the Array");
    for (int i = 0; i < n; i++) {
        arr[i] = sc.nextInt();
    }

    // To print original array
    printArray(arr, n);

    // Function calling
    rvereseArray(arr, 0, n - 1);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(arr, n);

    return 0;
}
