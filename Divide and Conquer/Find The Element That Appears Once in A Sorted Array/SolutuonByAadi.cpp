#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> arr(n,0);

    // user input
    for(auto &i : arr)
    {
        cin>>i;
    }

    // aim is to find The Element That Appears Once in A Sorted Array
    // we will use ^ (bitwise xor) operator
    

    int number(0); // this var will contain the number that appears once

    for(auto i : arr)
    {
        number = number ^ i; // bitwise XOR
    }

    cout<<number; // printing the number

    return 0;
}