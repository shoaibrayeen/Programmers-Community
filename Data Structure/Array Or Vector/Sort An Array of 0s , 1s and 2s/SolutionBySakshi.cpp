#include<iostream>
#include<vector>
using namespace std;

void swap(int *px,int *py)
{
    int temp=*px;
    *px=*py;
    *py=temp;
}
void input(vector<int>&arr)
{
    cout<<"enter the elements in the array\n";
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
}

void sort(vector<int>&arr)
{
    int n=arr.size();
    int low=0;
    int mid=0;
    int high=n-1;
    
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:
            {
                swap(&arr[mid],&arr[low]);
                low++;
                mid++;
                break;
            }
            
            case 1:
            {
                mid++;
                break;
            }
            
            case 2:
            {
                swap(&arr[high],&arr[mid]);
                high--;
                break;
                
            }
          
        }
    }
    
}

void display(vector<int>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main()
 {
    cout<<"enter the size of array\n";
         int size;
         cin>>size;
         vector<int>arr(size,0);
         input(arr);
         sort(arr);
         display(arr);
     

	return 0;
}
