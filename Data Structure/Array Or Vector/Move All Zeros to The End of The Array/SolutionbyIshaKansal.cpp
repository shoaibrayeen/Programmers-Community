//moving  zeros at end
#include<iostream>
#include<vector>
using namespace std;
void zeroatend(vector <int>&arr)
{
int pt1=0,itr=0;
//pt1 makes sure all elements after it are non zero
//itr traverses entire array
while(itr<arr.size())
{
if(arr[itr]!=0)
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
    zeroatend(arr);
    print(arr);
}
