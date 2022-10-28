#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int v;
    void dfs(int node, vector<int> &vis,vector < int > list1[])
    {
        vis[node]=1;
        for(auto it: list1[node])
        {
            if(!vis[it])
                dfs(it, vis, list1);
        }
    }


    int numProvinces(vector<vector<int>>& isConnected, int v) {
        vector<int>vis(v,0);
        vector<int> list1[v];

        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    list1[i].push_back(j);
                    list1[j].push_back(i);
                }
            }
        }

        int c=0;
        for(int i=0;i<v;i++)
        {
            if(!vis[i])
            {
                c++;
                dfs(i, vis, list1);
            }
        }
        return c;

    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;

        vector<vector<int>> adj;

        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }


        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
