#include <iostream>
#include <vector>

using namespace std;
#define endl '\n'

int first_occurence(vector<int> &arr, int key)
{
    // so in this we are searching for the first occurence of key
    int start = 0;
    int end = arr.size() - 1;
    int result(-1);
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            // you have found the occurence now check
            // wether it is the first occurence or there exist another
            // occurenec on the left part of the array
            // save the result and then find occ in left part if any
            result = mid;
            end = mid - 1; // check for the left half of array
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return result;
}

int last_occurence(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int result(-1);
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            result = mid;
            // search in the right half for the last occurence
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n, 0);

    for (auto &i : v)
    {
        cin >> i;
    }

    int key;
    cin >> key;

    cout << first_occurence(v, key) << endl;
    cout << last_occurence(v, key);

    return 0;
}