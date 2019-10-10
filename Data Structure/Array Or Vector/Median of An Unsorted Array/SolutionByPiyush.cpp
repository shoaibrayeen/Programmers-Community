include<iostream>
using namespace std;

/*
Program Description: An Unsorted Array is given and You need to find its median.
Input: 1. ARRAY
       2. Its SIZE
Return: Median of the given array.
Solution Description: I will add all the elements of the array and then divide their sum by the size of the array.
*/

float calc_median(int input_Array[], int size_of_array)
{
    float median = 0.0, sum = 0.0; // Float variables because median can be decimal values.
    for(int i=0; i<size_of_array; i++)
        sum += input_Array[i];
    median = sum / size_of_array; // Finding the median by dividing the sum of the elements by the size of the array.
    return median;
}

int main()
{
    int size_of_array = 0;
    cout<<"\nEnter the size for your array:";
    cin>>size_of_array;
    int input_Array[size_of_array]; 
    cout<<"\nEnter the elements for your array:";
    for(int i=0; i<size_of_array; i++)
        cin>>input_Array[i];
    cout<<calc_median(input_Array, size_of_array); // Printing the median returned by the function.
    return 0;
}
