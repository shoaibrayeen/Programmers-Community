#include <iostream>
using namespace std;

void bubbleSort(int *input, int size) { 
    for (int i = 0; i < size - 1; i++) { 
        for (int j = 0; j < size - i - 1; j++) { 
            if (input[j] > input[j + 1]) { 
                int tmp = input[j]; 
                input[j] = input[j + 1]; 
                input[j + 1] = tmp; 
            } 
        } 
    } 
}

int main()
{
    // First line contains an integer 'N' representing the size of the array/list.
    //Second line contains 'N' single space separated integers representing the elements in the array/list.
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> input[i];
    }

    bubbleSort(input, size);

    for (int i = 0; i < size; ++i)
    {
        cout << input[i] << " ";
    }

    delete[] input;
    cout << endl;
}
