//to find missing  number
//using XOR
#include <iostream>
#include <vector>
using namespace std;

int find(vector<int>& arr)
{
    int ans = 1;
    for (int i = 2; i <= arr.size() + 1; i++) {
        ans ^= i;
        //Xor with 1 to n
    }
    for (int i = 0; i < arr.size(); i++) {
        ans ^= arr[i];
    }
    return ans;
}

void input(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
}
int main(int args, char** argv)
{
    int n;
    cout << "Enter size:";
    cin >> n;
    //input size
    vector<int> arr(n, 0);
    cout << "Enter array:";
    input(arr);
    cout << "Missing Number: ";
    cout << find(arr);
}
