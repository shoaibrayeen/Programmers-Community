#include <iostream>
using namespace std;

/*
Program Description: An Array is given and every element is appearing twice except one element. You need to find that element.
Input: 1. ARRAY
       2. Its SIZE
Return: Element that occurs only once.
Solution Description: I will compare each element of the given array from the whole array and hence will find the element that appears only once.
*/

int check_for_repitition(int array[], int size) //Function to find the element that occurs only once.
{
    int element = 0, count = 0; //count variable is used to find the number of times a given element appearsin the array.

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i] == array[j])
                count++;
        }
        if (count == 1) {
            element = array[i];
            break;
        }
        count = 0;
    }
    return element;
}

int main()
{
    int size = 0;
    cout << "\nEnter the size for your array:";
    cin >> size;
    int array[size];
    cout << "\nEnter the elements for your array:";
    for (int i = 0; i < size; i++)
        cin >> array[i];
    cout << check_for_repitition(array, size); //calling the function to find the element and then printing the element that is returned by the function.
    return 0;
}
