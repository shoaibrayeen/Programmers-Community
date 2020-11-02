#include "iostream"
#include "climits"
using namespace std;

// works only for positive integers (values>0)
// It will perform better if the range of greatest and smallest value in array is less.
void count_sort(int *a, int n)
{
    int max_number = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_number = max(max_number, a[i]);
    }

    
    // max_number + 1 --> I would be making an array and keeping my index from 1
    int *freq = new int[max_number + 1]{0};
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    // re entering the number in the original array
    int pointer = 0;
    for(int i=0;i<max_number+1;i++)
    {
        while(freq[i]>0)
        {
            a[pointer] = i;
            pointer++;
            freq[i]--;
        }
    }

    
}

int main()
{
    int a[] = {2, 3, 1, 5, 10, 3, 4, 5, 6, 7, 4};
    int n = sizeof(a) / sizeof(int);

    count_sort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
