#include<iostream>

using namespace std;

//Time complexity - O(log N)

//GCD
int GCD(int x,int y)
{
    if (x==0)
    {
        return y;
    }
    return GCD(y%x,x);

}

//LCM
int LCM(int x1,int y1)
{
    int z = GCD(x1,y1);
    int lcm = (x1*y1)/z;
    return lcm;
}



int main()
{
    int a,b;
    cout<<"Enter the value of a and b:";
    cin >>a>>b;
    int c = GCD(a,b);
    int lcm_of_two_numbers = LCM(a,b);
    cout <<"GCD of two numbers:"<<c<<endl;
    cout<<"LCM of two Numbers:"<<lcm_of_two_numbers<<endl;
    return 0;

}
