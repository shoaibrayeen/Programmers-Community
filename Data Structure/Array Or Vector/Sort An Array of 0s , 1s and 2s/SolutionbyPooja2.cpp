/*
    An Array is given with 0s, 1s and 2s and you need to sort the array.
*/

#include<iostream>
using namespace std;

void sort(int *nums, int n)
{
    int zeroes = 0;
    int var = n - 1;

    while(zeroes < var)       //sort zeroes
    {
        if(nums[zeroes] == 0)
            zeroes++;
        else if(nums[var] != 0)
            var--;
        else if(nums[zeroes] != 0 && nums[var] == 0)
        {
            nums[var--] = nums[zeroes];
            nums[zeroes++] = 0;
        }
    }

    int ones = zeroes;
    var = n - 1;
    while(ones < var)         //sort ones
    {
        if(nums[ones] == 1)
            ones++;
        else if(nums[var] == 2)
            var--;
        else if(nums[ones] != 1 && nums[var] != 2)
        {
            nums[ones++] = 1;
            nums[var--] = 2;
        }
    }
}

int main()
{
    int n;
    cout << "Size ? ";
    cin >> n;

    cout << "Enter Array (0, 1 and 2) ";
    int *nums = new int[n];
    for(int i = 0; i < n; i++)
        cin >> i[nums];

    sort(nums, n);

    for(int i = 0; i < n; i++)
        cout << nums[i] << " ";

}
