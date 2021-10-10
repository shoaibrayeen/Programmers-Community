#include <climits>
#include <iostream>
using namespace std;

struct Edge {
    int u;
    int v;
    int w;
};

struct Graph {
    int V;
    int E;
    struct Edge* edge;
};

void dijkstra(Graph* g, int source)
{
    int u, v, w;
    int d[g->V];
    int p[g->V];
    for (int i = 0; i < g->V; i++) {
        d[i] = INT_MAX;
        p[i] = 0;
    }
    d[source] = 0;
    for (int i = 0; i <= g->V - 1; i++) {
        for (int j = 0; j < g->E; j++) {
            u = g->edge[j].u;
            v = g->edge[j].v;
            w = g->edge[j].w;

            if (d[u] != INT_MAX && d[v] > d[u] + w) {
                d[v] = d[u] + w;
                p[v] = u;
            }
        }
    }
    cout << "\nVertex\t\t:\t";
    for (int i = 0; i < g->V; i++) {
        cout << i << "\t";
    }
    cout << "\nDistance\t:\t";
    for (int i = 0; i < g->V; i++) {
        cout << d[i] << "\t";
    }
    cout << "\nParent\t\t:\t";
    for (int i = 0; i < g->V; i++) {
        cout << p[i] << "\t";
    }
    cout << endl;
}

int main()
{
    Graph* g = (Graph*)malloc(sizeof(Graph));
    cout << "\nEnter Number of Vertices\t:\t";
    cin >> g->V;
    cout << "\nEnter Number of Edges\t:\t";
    cin >> g->E;
    g->edge = (Edge*)malloc(g->E * sizeof(Edge));
    cout << "\nEnter Edge (source , destination , weight)\n";
    for (int i = 0; i < g->E; i++) {
        cout << "\nEnter values for " << i + 1 << " Edge\n";
        cin >> g->edge[i].u;
        cin >> g->edge[i].v;
        cin >> g->edge[i].w;
    }
    cout << "\nEnter Source Vertex\t:\t";
    int s;
    cin >> s;
    dijkstra(g, s);
    return 0;
}
