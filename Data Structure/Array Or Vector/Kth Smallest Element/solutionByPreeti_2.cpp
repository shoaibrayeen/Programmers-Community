#include <iostream>
using namespace std;

int randomPartition(int arr[], int l, int r);

int kthSmallest(int arr[], int l, int r, int k) {
    if (k > 0 && k <= r - l + 1) {
        int pos = randomPartition(arr, l, r);
        if (pos-l == k-1) {
            return arr[pos];
        }
        if (pos-l > k-1) {
            return kthSmallest(arr, l, pos-1, k);
        }
        return kthSmallest(arr, pos+1, r, k-pos+l-1);
    }
    return INT_MAX;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r) {
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] <= x) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

int randomPartition(int arr[], int l, int r) {
    int n = r-l+1;
    int pivot = rand() % n;
    swap(&arr[l + pivot], &arr[r]);
    return partition(arr, l, r);
}

int main() {
    int n;
    cout << "\nEnter Size\t:\t";
    cin >> n;
    int *a = new int[n];
    cout << "\nEnter Array Elements\n";
    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];
    }
    int k;
    cout << "Enter K\t:\t";
    cin >> k;
    cout << "\nKth Smallest Element\t:\t" << kthSmallest( a , 0 , n-1 , k ) << endl;
    delete[] a;
    return 0;
}
