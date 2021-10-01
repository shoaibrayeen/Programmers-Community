#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int compare(string A, string B)
{
    string AB = A.append(B);
    string BA = B.append(A);
    if(AB > BA)
       return 1;

    else 
       return 0;   
}

void display(string arr[], int n)
{ 
	int i=0;
	while(i<n)
	{
		cout << arr[i];
		i++;
	 } 
}

int main()
{
    int n;
    cout << "size of Array: " << endl;
    cin >> n;
    string arr[100];

	int i=0;
	while(i<n)
	{
		cin >> arr[i];
		i++;
	}  
    sort(arr,arr+n,compare);
    display(arr,n);
    return 0;
}
