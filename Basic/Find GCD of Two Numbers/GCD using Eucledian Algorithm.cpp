#include<iostream>

using namespace std;

int GCD(int x,int y)
{
    if (x==0)
    {
        return y;
    }
    return GCD(y%x,x);

}

int LCM(int x,int y)
{
    int d = GCD(x,y);
    int c = (x*y)/d;
    return c;
}



int main()
{
    int a,b;
    cin >>a>>b;
    int c = GCD(a,b);
    int lcm_of_two_numbers = LCM(a,b);
    cout << c<<endl;
    cout<<lcm_of_two_numbers;

}
