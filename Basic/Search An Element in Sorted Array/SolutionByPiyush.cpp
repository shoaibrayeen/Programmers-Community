#include <iostream>
using namespace std;

string search_in_sorted(int array[100], int size, int element)
{
    int found_number = 0;
    for(int i=0; i<size; i++)
    {
        if(array[i] == element)
        {
            found_number = 1;
        }
    }
    if(found_number == 1)
        return "YES";
    else
        return "NO";
}

int main()
{
    int array[100], size, i, element;
    cout<<"\nEnter the size of your array:";
    cin>>size;
    cout<<"\nEnter the elements for your array:";
    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }
    cout<<"\nEnter the element to search";
    cin>>element;
    cout<<search_in_sorted(array, size, element);
}
