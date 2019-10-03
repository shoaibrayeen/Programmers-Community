//printing a given matrix in spiral format
#include<iostream>
#include<vector>
using namespace std;
void spiralprint(vector<vector<int> >&arr)
{
int rs=0,cs=0,re=arr.size()-1,ce=arr[0].size()-1,count=arr.size()*arr[0].size();
//count is total number of elements
while(count>=0)
{
for(int i=rs,j=cs;j<=ce && count>=0;j++)
{
    cout<<arr[i][j]<<" ";
    count--;
}
rs++;

for(int j=ce,i=rs;i<=re && count>=0;i++)
{
    cout<<arr[i][j]<<" ";
    count--;
}
ce--;

for(int i=re,j=ce;j>=cs && count>=0;j--)
{
    cout<<arr[i][j]<<" ";
    count--;
}
re--;

for(int j=cs,i=re;i>=rs && count>=0;i--)
{
    cout<<arr[i][j]<<" ";
    count--;
}
cs++;

}
}
void input(vector<vector<int> >&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
           cin>>arr[i][j];
        }
    }
}
int main(int args,char** argv)
{
    int n;
    cin>>n;
    //input size
    cout<<"Enter size:";
    vector<vector<int> >arr(n,vector<int>(n,0));
    cout<<"Enter array:";
    input(arr);
    cout<<"Output: ";
    spiralprint(arr);

}
