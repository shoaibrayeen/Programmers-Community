#include <iostream>
using namespace std;

int main() {

    int size,highest_element,m=0,var;
    cout<<"Enter size of array:";
    cin>>size;

    cout<<"\nEnter the range of array(0 to m-1) i.e highest element ";
    cin>>highest_element;

    int arr[size];
    cout<<"\nEnter array element:";
    for(int i=0;i<size;i++)
    {
          cin>>var;
          if(var>highest_element) {
             cout<<"enter valid range element";
              cin >> var;
          }
          else
              arr[i]=var;
    }
    for(int i=0;i<=size;i++)
    {
        if(arr[i]!=m)
            break;
        m++;
    }
    cout<<"\nsmallest missing value  is : "<<m;
    return 0;
}
