#include<iostream>
using namespace std;
void printNextGreaterElement(int arr[], int n)
{
    int next, i, j;
    for (i=0; i<n; i++)
    {
        next = -1;
        for (j = i+1; j<n; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        printf("%d -- %d\n", arr[i], next);
    }
}

int main()
{
	int size;
	cin >> size;
    int arr[size];
	for( int i = 0; i < size; i++ ){
		cin >> arr[i];
	}
    int n = sizeof(arr)/sizeof(arr[0]);
    printNextGreaterElement(arr,n);
    return 0;
}
