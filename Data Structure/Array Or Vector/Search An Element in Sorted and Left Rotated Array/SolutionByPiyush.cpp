#include <iostream>
using namespace std;

/*
Program Description: An Array is sorted and left rotated and you need to find an element in the Array.
Input: 1. Array
       2. Size of array
       3. Element to search for
Return: "YES" if the element was found and "NO" if the element was not found.
Solution Description: I will simply implement "Linear Search Algorithm".
*/

char* search_in_sorted(int array[], int size, int element)
{
    int found_number = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == element)
            found_number = 1;
    }
    if (found_number == 1)
        return "YES";
    else
        return "NO";
}

int main()
{
    int size, element;
    cout << "\nEnter the size of your array:";
    cin >> size;
    int array[size];
    cout << "\nEnter the elements for your array:";
    for (int i = 0; i < size; i++)
        cin >> array[i];
    cout << "\nEnter the element to search";
    cin >> element;
    cout << search_in_sorted(array, size, element);
}
