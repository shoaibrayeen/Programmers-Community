#include <iostream>
#include <ctime> 
using namespace std;


int getRandom(int x, int y) { 
    srand(time(NULL)); 
    return (x + rand() % (y-x+1)); 
}

int binarySearch(int* arr, int low, int high, int key) { 
   if (high >= low) { 
        int mid = getRandom(low, high);
        if (arr[mid] == key) {
            return mid; 
        }
        if (arr[mid] > key) {
            return binarySearch(arr, low, mid-1, key); 
        }
        return binarySearch(arr, mid+1, high, key; 
   } 
   return -1; 
} 
  
int main() { 
    int n;
    cout << "\nEnter Size\t: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter Elements ";
    for(int i =0; i < n; i++ ) {
      cin >> arr[i];
    }
    int key;
    cout << "\nEnter key to be search\t: ";
    cin >> key;
    int temp = binarySearch(arr,0,n-1,key);
    if( temp == -1 ) {
      cout << "\nKey not Found\n";
    }
    else {
      cout << "\nKey Found at " << temp << " Position\n";
    }
    return 0; 
}
