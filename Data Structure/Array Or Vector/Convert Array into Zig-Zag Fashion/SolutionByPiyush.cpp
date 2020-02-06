#include<iostream>
using namespace std;

/*
Program Description: An Array is given with distinct elements. Rearrange the elements of array in zig-zag fashion. The converted array should be in form a < b > c < d > e < f.
Input: 1. Array
       2. Its size
Constraint: 1. 1 < size Of Array <= 10^6
            2. 0 < Array Elements <= 10^9
Output: Return the modified array in a zig-zag format.
Solution Description: I will traversethe whole array and for every EVEN index I will compare the elemnt with the next element to it with a 'greater then sign' and vice- versa for every ODD index.
*/

void swap(int &num1, int &num2)// Function to swap 2 values.
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int* zig_zag_array(int input_array[], int size_of_array) // Function to perform the zig-zag pattern.
{
    for(int i=0, j=0; i<size_of_array-1, j<size_of_array; i++, j++)
        {
            j = i+1;
            if(i%2 == 0) //for every EVEN index I will compare the element with the very next element with a '>' sign in between.
            {
                if(input_array[i] > input_array[j])
                    swap(input_array[i], input_array[j]);
            }
            else //for every ODD index I will compare the element with the very next element with a '<' sign in between.
            {
                if(input_array[i] < input_array[j])
                    swap(input_array[i], input_array[j]);
            }
        }
    return input_array;
}

int main()
{
    int size_of_array = 0;
    cout<<"\nEnter the size of your array:";
    cin>>size_of_array;
    int input_array[size_of_array]; //Input array.
    cout<<"\nEnter your array:";
    for(int i=0; i<size_of_array; i++) //Taking input array from user.
        cin>>input_array[i];
    int *resultant_array = zig_zag_array(input_array, size_of_array); // Resultant array after converting the input array to the zig-zag formation..
    for(int i=0; i<size_of_array; i++)
        cout<<resultant_array[i]<<",";
    return 0;
}
