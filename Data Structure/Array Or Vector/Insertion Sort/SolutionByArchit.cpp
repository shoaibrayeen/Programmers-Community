#include <iostream>
using namespace std;

// arr - input array
// n - size of array

void insertionSort(int *input, int size) { 
    int i = 1; 
    int temp; 
    while (i < size) { 
        temp = input[i]; 
        int j = i - 1; 
        while (j >= 0) { 
            if (input[j] > temp) { 
                input[j + 1] = input[j]; 
            } else { 
                break; 
            } 
            j--; 
        } 
        input[j + 1] = temp; 
        i++; 
    } 
}



/* Time complexity: O(N)
Space complexity: O(1) where N is the number of operations */ 
int main()
{
    int size;
    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    insertionSort(input, size);

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;
    cout << endl;

    return 0;
}
