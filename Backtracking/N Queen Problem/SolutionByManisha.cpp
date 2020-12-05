#include <bits/stdc++.h> 
  
#define breakLine cout << "\n---------------------------------\n"; 
#define MAX 10 
  
using namespace std; 
int arr[MAX], no; 
  
void nQueens(int k, int n); 
bool canPlace(int k, int i); 
void display(int n); 
  
void nQueens(int k, int n) { 
  
    for (int i = 1;i <= n;i++) { 
        if (canPlace(k, i)) { 
            arr[k] = i; 
            if (k == n) {
                display(n);
            }
            else {
                nQueens(k + 1, n); 
            }
        } 
    } 
} 
  
bool canPlace(int k, int i) { 
    for (int j = 1;j <= k - 1;j++) { 
        if (arr[j] == i || (abs(arr[j] - i) == abs(j - k))) {
           return false; 
        }
    } 
    return true; 
} 
  
void display(int n) { 
    breakLine  
    cout << "Arrangement No. " << ++no; 
    breakLine 
  
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n; j++) { 
            if (arr[i] != j) {
                cout << "\t-";
            }
            else {
                cout << "\tQ"; 
            }
        } 
        cout << endl; 
    } 
    breakLine 
} 
  
int main(){ 
    int n;
    cout << "\nEnter n\t:";
    cin >> n;
    nQueens(1, n);     
    return 0; 
} 
