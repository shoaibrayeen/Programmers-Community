/*
  Program Description - This program return Kth Smallest Element From An Array.
  Time Complexity: O(n * log n)
  Space Complexity: O(1)
  Solution Description:  Sorting the Array with STL ( Standard Template Library ) and then returning Kth Element.
  Assumption(s)[Optional]: K is less than the size of Array.
*/


#include <iostream>
using namespace std;

int kthSmallestElement(int Array[], int sizeOfArray, int k) {
    sort(Array , Array  + sizeOfArray);
    return Array[ k - 1 ];
}

int main() {
    int sizeOfArray;
    cout << "\nEnter Size\t:\t";
    cin >> sizeOfArray;
    int *Array = new int[sizeOfArray];
    cout << "\nEnter Array Elements\n";
    for ( int itr = 0; itr < sizeOfArray; itr++ ) {
        cin >> Array[itr];
    }
    int k;
    cout << "Enter K\t:\t";
    cin >> k;
    cout << "\nKth Smallest Element\t:\t" << kthSmallestElement( Array , sizeOfArray , k ) << endl;
    delete[] Array;
    return 0;
}
