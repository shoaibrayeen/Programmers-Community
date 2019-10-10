#include<iostream>

using namespace std;

bool power_of_two(int x)
{

    if((x&(x-1))==0 && x>0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n;

    cout<<"Enter a number\n";
    cin>>n;

    cout<<"\nIs this number a power of 2 ? \n";
    cout<<(power_of_two(n) ? "Yes" : "No") ;

return 0;
}
