#include<iostream>
#include<stack>
using namespace std;

void convert(int num)
{
    stack <int> converted;
    int remainder;
    while(num!=0)
    {
        remainder=num%2;
        converted.push(remainder);
        num/=2;
    }
    cout<<"Displaying converted number: ";
    while(!converted.empty())
    {
        cout<<converted.top();
        converted.pop();
    }
}

int main()
{
    int num;
    cout<<"Enter the number you want to convert into binary system: ";
    cin>>num;
    convert(num);
    return 0;
}