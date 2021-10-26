#include <bits/stdc++.h>

using namespace std;

int nonRepeatingElement(vector<int> arr){
    int n = arr.size();
    
    int ans = 0;    // this will store the final answer (the number which doesn't repeat)
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i]; // XOR all elements of the array together
    }
    return ans; // at the end only the element which appears exactly once will survive
}

int main(){
    int n;  // size of array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter each element of the array in sequence: \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The number which does not repeat in the array is " << nonRepeatingElement(arr) << "\n";

    return 0;
}
