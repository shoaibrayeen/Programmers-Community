#include <iostream>
#include <vector> 
using namespace std;

/* Time complexity: O(N^2) 
   Space complexity: O(N) 
   where N is the size of the input array */ 
int longestIncreasingSubsequence(int* arr, int n) { 
    vector<int> storage(n); 
    storage[0] = 1; 
    int ans = 1; 
    for (int i = 1; i < n; i++) { 
        int max = 1; 
        for (int j = i - 1; j >= 0; j--) { 
            if (arr[j] < arr[i]) { 
                int op = storage[j] + 1; 
                if (op > max) { 
                    max = op; 
                } 
            } 
        } 
        storage[i] = max; 
        if (max > ans) { 
            ans = max; 
        } 
    } 
    return ans; // Contains the length of Longest Subsequence
}

int main() {
	// The first line of input contains an integer N. 
	// The following line contains N space separated integers, that denote the value of elements of array.
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << longestIncreasingSubsequence(arr, n);
}
