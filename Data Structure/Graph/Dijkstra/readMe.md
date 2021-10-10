# Dijkstra's Algorithm 

### Dijkstra's algorithm, conceived by Dutch computer scientist Edsger Dijkstra in 1956 and published in 1959,[1][2] solves the shortest path problem in a directed or undirected graph with edges of non-negative weight.

### The algorithm considers a set *S* of shortest paths, starting with an initial vertex *I*. At each step of the algorithm, in the adjacencies of the vertices belonging to *S*, that vertex with the smallest distance relative to *I* is searched and added to *S*, then repeating the steps until all vertices reachable by *I* are in *S*. Edges that connect vertices already belonging to *S* are disregarded. 

##### [Wikepedia in: <https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm>]

<br>

----

## Input

    Example 1:
        Enter the Edges:
        Exp:(node1, node2, weight)
        0 1 4
        0 3 2
        1 3 1
        1 2 5
        2 3 8
        2 5 6
        3 4 10
        4 5 2
        4 2 2

## Output

    Example 1: 2