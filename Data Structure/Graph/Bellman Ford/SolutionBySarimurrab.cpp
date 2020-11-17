#include "bits/stdc++.h"
using namespace std;


vector<int> bellman_ford(int v,int src, vector<vector<int>> edges)
{
    vector<int> distance(v+1,INT_MAX);
    distance[src] = 0;

    for(int i=0;i<v-1;i++)
    {
        for(auto edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];

            // Infinte + something will lead to overflow...
            //       |
            //      \_/
            if(distance[u]!=INT_MAX and  distance[u]+wt<distance[v])
            {
                distance[v] = distance[u]+wt;
            }
        }
    }

    // negative edges cycle
    for(auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        
        if(distance[u]!=INT_MAX and  distance[u]+wt<distance[v])
        {
            cout<<"Negative Edge Cycle Found\n";
            exit(0);
        }
    }




    return distance;
}



int main()
{
    // e- number of edges
    // v- number of vertex
    int e,v;
    cout<<"Enter the number of edges and vertex:";
    cin>>e>>v;
    vector<vector<int>> edges;
    cout<<"Enter the Edges:\nExp:(node1, node2, weight)\n";
    for(int i=0;i<e;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({u,v,wt});
    }
    int src;
    cout<<"\nEnter the Source:";
    cin>>src;
    vector<int> distance = bellman_ford(v,src,edges);

    cout<<"\nDistances:\n";
    for(int i=1;i<=v;i++)
    {
        cout<<"From "<<src<<" to "<< i<<"-->"<<distance[i]<<endl;
    }

    return 0;
}




/*
Enter the number of edges and vertex:4 4
Enter the Edges:
Exp:(node1, node2, weight)
1 3 5
3 4 1
4 2 2
1 2 6

Enter the Source:1

Distances:
From 1 to 1-->0
From 1 to 2-->6
From 1 to 3-->5
From 1 to 4-->6


Enter the number of edges and vertex:4 4
Enter the Edges:
Exp:(node1, node2, weight)
0 1 1
1 2 -1
2 3 -1
3 0 -1

Enter the Source:1
Negative Edge Cycle Found


*/