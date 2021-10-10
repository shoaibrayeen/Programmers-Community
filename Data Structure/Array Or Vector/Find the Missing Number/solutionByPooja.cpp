/*
  You are given a list of n - 1 integers and these integers are in the range of 1 to n. There are no duplicates in list.
  One of the integers is missing in the list. Write an efficient code to find the missing integer.
*/
#include <iostream>
using namespace std;

int Missing_Element(int* arr, int size)
{
    int original_sum;
    int calculated_sum = 0;

    original_sum = ((size + 1) * (size + 2)) / 2; //original calculate the sum of element including missing element;

    for (int i = 0; i < size; i++)
        calculated_sum += arr[i];

    return original_sum - calculated_sum;
}

int main()
{
    int size, ele, count = -1, dup;
    cout << "Enter the size of array ";
    cin >> size;

    int* arr = new int[size];
    cout << "\nEnter element of array,range of element be(1 to " << size + 1 << " ),and don't enter duplicates ";
    for (int i = 0; i < size; i++) {
        dup = 0;
        cout << "\nEnter " << i << " element: ";
        cin >> ele;

        if (ele <= size + 1) //this 'if' checks  input element is in range or not
        {
            for (int j = 0; j <= count; j++) //this 'for' loop checks duplicate element
            {
                if (arr[j] == ele) {
                    dup++;
                    break;
                }
            }
            if (dup != 0) //this 'if' insert the element in array
            {
                cout << "\nyou have enter a duplicate element";
                i--;
            } else {
                arr[i] = ele;
                count = i;
            }

        } else {
            cout << "\nYou have Enter an element which is out of range";
            i--;
        }
    }
    int missing_element = Missing_Element(arr, size);
    cout << "\nMissing element is " << missing_element;
}
