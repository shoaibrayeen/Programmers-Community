### Find shortest paths from source to all vertices in the given graph and also detect if graph contains a negative edge cycle or not.

    
    Example 1:
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
  
###
	Example 2:
	Enter the number of edges and vertex:4 4
	Enter the Edges:
	Exp:(node1, node2, weight)
	0 1 1
	1 2 -1
	2 3 -1
	3 0 -1

	Enter the Source:1
	Negative Edge Cycle Found