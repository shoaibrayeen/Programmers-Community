/*
Program Description: An Array is given and every element is appearing twice except two elements. You need to find those elements.
Input: 1. ARRAY SIZE
       2. ARRAY ELEMENTS
Return: Elements that occurs only once.
Solution Short Description: 
• First we will need to find the XOR of all elements of the array, then we will create a mask having same Least Significant Bit as XOR.
• Now we will use this mask to separate the two numbers.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr[i] = x;
    }
    // stores XOR of all the elements of the array
    int XOR = 0;
    for (int i = 0; i < n; i++) {
        XOR = XOR ^ arr[i];
    }
    // creating a mask having same LSB as XOR
    int mask = XOR & -XOR;
    // using this mask we can separate the two numbers
    // (mask & arr[i])!=0 will check if that element has set bit at the same position as mask.
    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++) {
        if ((mask & arr[i]) != 0) {
            num1 = num1 ^ arr[i];
        } else {
            num2 = num2 ^ arr[i];
        }
    }
    cout << num1 << " and " << num2 << endl;
    return 0;
}