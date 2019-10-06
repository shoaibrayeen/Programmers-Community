#include<iostream>
using namespace std;

/*
Program Description: An Array is given and every element is appearing twice except two elements. You need to find those elements.
Input: 1. ARRAY
       2. Its SIZE
Return: Elements that occurs only once.
Solution Description: I will compare each element of the given array from the whole array and hence will find the elements that appear only once.
*/
int check_for_repitition(int array[], int size) //Function to find the elements that occurs only once.
{
    int count=0, two_elements = 0; //count variable is used to find the number of times a given element appears in the array.
    
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(array[i] == array[j])
                count++;
        }
        if(count == 1)
        {
            cout<<array[i];
            if(two_elements == 1) // Here in this 'if' statement I make sure that the "and" between the two numbers only appears once and not like ""num1 and num2 and"".
                break;
            two_elements++;
            cout<<" and ";
        }
        count = 0;
    }
    return 0;
}

int main()
{
    int size=0; // Size of the array.
    cout<<"\nEnter the size for your array:";
    cin>>size;
    int array[size];
    cout<<"\nEnter the elements for your array:";
    for(int i=0; i<size; i++)
        cin>>array[i];
    cout<<"\n";
    check_for_repitition(array, size);//calling the function to find the elements and then printing the elements.
    return 0;
}
