<h1>find minimal spanning tree using kruskal's algorithm</h1>

<h2>What is Minimum Spanning Tree?</h2> 
Given a connected and undirected graph, a spanning tree of that graph is a subgraph that is a tree and connects all the vertices together. A single graph can have many different spanning trees. A minimum spanning tree (MST) or minimum weight spanning tree for a weighted, connected, undirected graph is a spanning tree with a weight less than or equal to the weight of every other spanning tree. The weight of a spanning tree is the sum of weights given to each edge of the spanning tree.

Structure of Kruskal's Algorithm:

Define an edge struct to handle edges more easily.<br>
```
struct edge {
	int first, second, weight;
};
```
<h2> Input </h2>

Connected and Undirected graph with edge and weight


<h2> Output </h2>
minimal spanning tree








