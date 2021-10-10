### Given a graph and a source vertex in the graph, find shortest paths from source to all vertices in the given graph.

Input

```
{ 
  { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
  { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
  { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
  { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
  { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
  { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
  { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
  { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
  { 0, 0, 2, 0, 0, 0, 6, 7, 0 } 
};
```

Output

```
Vertex   Distance from Source
0                0
1                4
2                12
3                19
4                21
5                11
6                9
7                8
8                14
```
