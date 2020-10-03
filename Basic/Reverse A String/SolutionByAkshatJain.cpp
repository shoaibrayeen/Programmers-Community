#include<bits/stdc++.h>
using namespace std;
void reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        reverse(str,len);
        cout<<str;
        cout<<endl;
    }
        return 0;
}
void reverse(char *str, int len)
{
 stack<char> s;
 for(int i=0;i<len;i++)
 {
     s.push(str[i]);
 }
  int i=0;
 while(!s.empty())
 {
     str[i++]=s.top();
     s.pop();
 }
}
