// Bubble sort using vector
#include<iostream>
#include<vector>

using namespace std;
#define endl '\n'


void print(vector <int> v)
{
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return;
}

// call by reference
// if the array is already sorted then flag vlaue stays 0 and after the first iteration itself the function stops
void Bubble_sort(vector<int> &arr)
{
    int flag(0);  
    int n = arr.size();

    // for (i : 0 to n-1) // n-1 because the last element would already be sorted
    for(int i = 0; i < n-1 ; i++)
    {
        flag = 0;
        for(int j = 0; j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                //swap
                swap(arr[j], arr[j + 1]);
                flag = 1; // setting flag to 1 indicating that the array isnt sorted yet
            }
        }
        if (flag == 0)
        {
            // no swaps are done then no need to check for other iterations
            break;
        }
    }
    print(arr);

    return;
}



int main()
{
    int n;
    cin>>n; // enter the size of the array
    
    vector<int> v(n,0);

    for(auto &i : v)
    {
        cin>>i;
    }

    Bubble_sort(v);

    return 0;
}
