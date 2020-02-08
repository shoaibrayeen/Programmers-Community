//sort 0 1
#include<iostream>
#include<vector>
using namespace std;
void sort_01(vector <int>&arr)
{
int pt1=0,itr=0;
//pt1 makes sure all elements before it are 0
//itr traverses entire array
while(itr<arr.size())
{
if(arr[itr]==0)
{
    swap(arr[pt1],arr[itr]);
   pt1++;
}
itr++;
}
}

void input(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];  
    }
}
void print(vector<int>&arr)
{
        for(int i:arr)
        {
            cout<<i<<" ";
        }
}
int main(int args,char** argv)
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    //input size
    vector<int>arr(n,0);
    cout<<"Enter array:";
    input(arr);
    cout<<"Output: ";
    sort_01(arr);
    print(arr);

}
