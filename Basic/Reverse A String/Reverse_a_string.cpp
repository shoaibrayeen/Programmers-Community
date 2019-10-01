#include<iostream>
using namespace std;
int main()
{string s;
cin>>s;
int i=0,j=s.length()-1;
while(s<=j)
{ swap(s[i], s[j]);
}
cout<<s;
return 0;

}
