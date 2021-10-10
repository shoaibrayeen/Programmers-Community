#include <algorithm>
#include <iostream>
using namespace std;

double getMedian(int arr1[], int arr2[], int n1, int n2)
{
    int begin1 = 0, end1 = n1;
    while (begin1 <= end1) {
        int i1 = (begin1 + end1) / 2;
        int i2 = (n1 + n2 + 1) / 2 - i1;
        int min1 = (i1 == n1) ? INT8_MAX : arr1[i1];
        int max1 = (i1 == 0) ? INT8_MIN : arr1[i1 - 1];

        int min2 = (i2 == n2) ? INT8_MAX : arr2[i2];
        int max2 = (i2 == 0) ? INT8_MIN : arr2[i2 - 1];
        if (max1 <= min2 && max2 <= min1) {
            if ((n1 + n2) % 2 == 0)
                return ((double)max(max1, max2) + min(min1, min2)) / 2;

            else
                return ((double)max(max1, max2));
        }

        else if (max1 > min2)
            end1 = i1 - 1;

        else
            begin1 = i1 + 1;
    }
    return -1;
}

int main()
{
    int n1, n2;
    cout << "Enter the size of two arrays" << endl;
    cin >> n1 >> n2;
    int arr1[n1], arr2[n2];
    cout << "Enter the elements of first array" << endl;
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter the elements of second array" << endl;
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    cout << "Median of Two sorted arrays is: " << getMedian(arr1, arr2, n1, n2);
    return 0;
}