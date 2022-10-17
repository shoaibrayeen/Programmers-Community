// merge sort in cpp
#include<iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    // create temp arrays to store left and right subarrays
    int L[n1], R[n2];
    
    // Copying data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
        
    // here we merge the temp arrays back into arr[l..r]
    i = 0; // Starting index of L[i]
    j = 0; // Starting index of R[i]
    k = left; // Starting index of merged subarray
    
    while (i < n1 && j < n2) 
    {
        // place the smaller item at arr[k] pos
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements of L[], if any 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    // Copy the remaining elements of R[], if any 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int left, int right)
{
    int mid;
    if(left < right)
    {
        // can also use mid = left + (right - left) / 2
        // this can avoid data type overflow
        mid = (left + right)/2;
        
        // recursive calls to sort first half and second half subarrays
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}
void printArray(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int *array;
    int size;
    cin >> size;
    array= new int[size];
    for (int i = 0; i < size; ++i) {
    cout << "Element " << i + 1 << ": ";
    cin >> *(array + i);
    }
    printArray(array, size);

    mergeSort(array, 0, size-1); 
    printArray(array, size);
}
