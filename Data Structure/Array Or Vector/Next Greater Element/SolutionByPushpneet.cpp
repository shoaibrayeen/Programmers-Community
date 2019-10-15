#include<iostream>

using namespace std;

int nextgreatest(int a[],int n)
{
    int i,j,next;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]<a[j])
                next=a[j];
            else
                next=-1;
        }
        cout<<a[i]<<"----->"<<next<<"\n";
    }
    return 0;
}
int main()
{
    int n,a[100],i;
    cout<<"enter no. of terms";
    cin>>n;

    //input terms of an array
    for(i=0;i<n;i++)
        cin>>a[i];
    
    //calling function
    nextgreatest(a,n);
    return 0;
}
