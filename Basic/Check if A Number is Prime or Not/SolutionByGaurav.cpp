#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int f=0;
    if(n<=1)
    f=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<"Prime Number";
    else
    cout<<"Not Prime Number";
	return 0;
}
