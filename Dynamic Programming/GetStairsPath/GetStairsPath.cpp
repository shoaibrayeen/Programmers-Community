#include<bits/stdc++.h>
using namespace std;
vector<string> getPath(int n)
{
    if(n==0)
    {
        vector<string>b;
        b.push_back("");
        return b;
    }
    else if(n<0)
    {
        vector<string>b;
        return b;
    }
    vector<string> path1 = getPath(n-1);
    vector<string> path2 = getPath(n-2);

    vector<string>paths;
    for(string i:path1)
    {
        paths.push_back("1"+i);
    }
    for(string i:path2)
    {
        paths.push_back("2"+i);
    }
    return paths;
}
int main()
{
    int n;
    cin>>n;
   vector<string>paths = getPath(n);
   for(auto i:paths)
   {
       cout<<i<<"\n";
   }

  return 0;
}
