#include <iostream>
#include <algorithm>
using namespace std;

void threeLargest(int arr[], int n)
{
    // this method fails testcase
    // n = 10 
    // arr[10] = 12 45 1 -1 45 54 23 5 0 -10
    // this method return :- 54 45 45 
    // but correct answer is :- 54 45 23


    /*
    int largest = INT8_MIN;
    int secondLargest = INT8_MIN;
    int thirdLargest = INT8_MIN;
     
    if(n < 3)
    {
        cout << "Three largest input does not exist";
        return ;
    }

    for(int i = 0;i < n;i++)
    {
        if(arr[i] > largest)
        {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest)
        {
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        }
        else if(arr[i] > thirdLargest)
        {
            thirdLargest = arr[i];
        }
    }

  cout << largest << " " << secondLargest << " " << thirdLargest << endl;
  */

   sort(arr,arr+n);
   int largest = 0, count = 1;
   for(int i = 1;i <= n;i++)
   {
       if(count < 4)
       {
           if(largest != arr[n - i])
           {
               // there we are doing this for handling duplicate values
               cout << arr[n - i] << " ";
               largest = arr[n - i];
               count++;
           }
       }
       else
          break;
   }
}

int main()
{
    int n;
    cout << "Enter size of array:" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    threeLargest(arr,n);

    return 0;
}