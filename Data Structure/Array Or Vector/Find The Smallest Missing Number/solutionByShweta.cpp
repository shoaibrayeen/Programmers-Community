#include<iostream>
using namespace std;

int smallmissing(int arr[], int size)
{   
    if(m<n)
        return -1;
    int i;
    if(arr[0]!=0)
    return 0;
    for(i=1;i<size;i++)
    {
        if(arr[i]==i);
        else return i;
    }
    return i;
}
int main(){
int n,i,m;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
cin>>m;

cout<<smallmissing(a,n,m);
return 0;
}
