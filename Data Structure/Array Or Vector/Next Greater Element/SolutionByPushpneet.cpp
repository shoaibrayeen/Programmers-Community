#include<iostream>

using namespace std;

int nextgreatest(int a[],int n)
{
    int i,j,next;
    for(i=0;i<n;i++)
    {
        next=-1;
        for(j=i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                next=a[j];
                break;
            }
        }
        cout<<a[i]<<"----->"<<next<<"\n";
    }
    return 0;
}

int main()
{
    int n,i;
    cout<<"enter no. of terms";
    cin>>n;
    int a[n];
    //input terms of an array
    for(i=0;i<n;i++)
        cin>>a[i];
    nextgreatest(a,n);
    return 0;
}
