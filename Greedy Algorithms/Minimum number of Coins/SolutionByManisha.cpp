#include <bits/stdc++.h> 
using namespace std; 

int available[] = {1, 2, 5, 10, 20, 50, 100, 200 , 500, 1000 , 2000}; 
int n = sizeof(available)/sizeof(available[0]); 
  
void findMin(int value) { 
    vector <int> res; 
    for (int  i = n-1; i >= 0; i-- ) { 
        while (value >= available[i]) { 
           value -= available[i]; 
           res.push_back(available[i]); 
        } 
    } 
    for (int i = 0; i < res.size(); i++) {
           cout << res[i] << "\t"; 
    }
} 
  
int main() { 
   int n;
   cout << "\nEnter Value\t:\t";
   cin >> n;
   cout << "\nMinimal number of change for " << n << "\t:\t"; 
   findMin(n); 
   return 0; 
} 
