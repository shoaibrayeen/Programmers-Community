#include <iostream>
using namespace std;

int binomialCoeff(int n, int k) { 
    int C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;
  
    for (int i = 1; i <= n; i++) {
        for (int j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
} 
 
int main () {
    cout << "\nEnter n\t:\t";
    int number;
    cin >> number;
    cout << "\nEnter k\t:\t";
    int k;
    cin >> k;
    cout <<"\nThe result is\t:\t" << binomialCoeff(number, k);
    cout << endl;
    return 0;
}
