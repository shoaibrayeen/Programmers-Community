//Search in a 2D Matrix
#include <bits/stdc++.h>
using namespace std;

//Method: Imaginary Binary Search
//T.C->O(log(M*N)) & S.C->O(1)
bool solve(vector<vector<int>> &v, int target)
{
    int n = v.size();
    int m = v[0].size();
    bool check = false;

    int low = 0, high = (n * m) - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid / m][mid % m] == target)
        {
            check = true;
            break;
        }
        else if (v[mid / m][mid % m] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return check;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        v.push_back(temp);
    }
    int target;
    cin >> target;
    bool ans = solve(v, target);
    if (ans)
    {
        cout << "Element is present!!" << endl;
    }
    else
    {
        cout << "Element is not present!!" << endl;
    }
    return 0;
}