
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, i;
  cout << "\nEnter Size of Array\t:\t";
  cin >> n;
  int a[n];
  cout << "\nEnter Array Elements\n";
  for( i = 0; i < n; i++ ) {
    cin >> a[i];
  }
  int Zcount = 0;
  for( i = 0; i < n; i++ ) {
    if( a[i] == 0 ) {
      Zcount++;
    }
  }
  i = 0;
  while( i < n ) {
      while( Zcount > 0 ) {
          a[i] = 0;
          Zcount--;
          i++;
      }
      a[i] = 1;
      i++;
  }
  cout << "\nModified Array\t:\t";
  for( i = 0; i < n; i++ ) {
    cout << a[i] << " ";
  }
  return 0;
}
