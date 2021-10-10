#include <bits/stdc++.h>
using namespace std;

template <typename T>
class graph {
public:
    map<T, list<pair<T, int>>> m;

    void add_edge(T a, T b, int dist, bool bidirecn)
    {
        m[a].push_back({ b, dist });
        if (bidirecn)
            m[b].push_back({ a, dist });
    }

    void print()
    {
        for (auto x : m) {
            cout << x.first << " ---> ";
            for (auto t : m[x.first])
                cout << " to " << t.first << " , dist " << t.second << "|";

            cout << endl;
        }
    }

    void djiktras(int src)
    {
        map<int, int> dist_tan;
        for (auto x : m) {
            dist_tan[x.first] = INT_MAX;
        }
        //____________________________________________________

        // set < pair< distance, node >>
        set<pair<int, int>> s;

        dist_tan[src] = 0;
        s.insert({ 0, src });

        while (!s.empty()) {
            auto p = *(s.begin());
            int node = p.second;
            int node_dist = p.first;
            s.erase(s.begin());

            for (auto nbr_pair : m[node]) {
                if (node_dist + nbr_pair.second < dist_tan[nbr_pair.first]) {

                    //deleting in set                                               <-----
                    auto itr = s.find({ dist_tan[nbr_pair.first], nbr_pair.first }); //       |
                    if (itr != s.end()) //                                                    |
                        s.erase(itr); //                                                       |

                    // In set to update, we have to delete old, and insert new value--------->|

                    // updating in dist_tan                                               |
                    dist_tan[nbr_pair.first] = node_dist + nbr_pair.second; //               |

                    // updating in set                                                    |
                    s.insert({ dist_tan[nbr_pair.first], nbr_pair.first }); //          <-----
                }
            }
        }

        for (auto pr : dist_tan) {
            cout << "From " << src << " --> " << pr.first << " distance = " << pr.second << " ";
            cout << endl;
        }
    }
};

int main()
{
    graph<int> g;
    // g.add_edge(1, 2, 3, true);
    // g.add_edge(1, 3, 2, true);
    // g.add_edge(2, 5, 4, true);
    // g.add_edge(2, 4, 7, true);
    // g.add_edge(3, 4, 1, true);
    // g.add_edge(4, 5, 5, true);

    int e;
    cout << "Enter number of edges: ";
    cin >> e;
    cout << "__________Enter Edges in the given format:__________\n\n";
    cout << "SOURCE   DESTINATION   WEIGHT   1/0(Bidirectional or not)\n\n";
    for (int i = 0; i < e; i++) {
        int s, d, wt;
        bool bidirection;
        cin >> s >> d >> wt >> bidirection;
        g.add_edge(s, d, wt, bidirection);
    }

    cout << "__________Check your graph__________\n\n";
    g.print();

    cout << endl
         << endl
         << "Now enter the Source Node from which you want to calculate the distances: ";
    int src;
    cin >> src;
    g.djiktras(src);

    return 0;
}
