#
# Algorithm of Dijkstra
#
# This algorithm calculates the shortest
# path in a directed or undirected graph
# with non-negative weight edges based
# on Dijkstra's Algorithm.
#
# Time Complexity: O(E * V log(V))
# Space Complexity: O(V^2)
#
# @author Ramon Almeida
# @date 2021-10-09
#

import sys
import heapq


def main():

    input_data = [
        [0, 4, 0, 0, 0, 0, 0, 8, 0],
        [4, 0, 8, 0, 0, 0, 0, 11, 0],
        [0, 8, 0, 7, 0, 4, 0, 0, 2],
        [0, 0, 7, 0, 9, 14, 0, 0, 0],
        [0, 0, 0, 9, 0, 10, 0, 0, 0],
        [0, 0, 4, 14, 10, 0, 2, 0, 0],
        [0, 0, 0, 0, 0, 2, 0, 1, 6],
        [8, 11, 0, 0, 0, 0, 1, 0, 7],
        [0, 0, 2, 0, 0, 0, 6, 7, 0]
    ]

    graph = create_graph(input_data)

    alg_dijkstra(graph.vertexes)

    print(f'{"Vertex": <10}Distance From Source')
    for i in graph.vertexes:
        print(f'{i.label: <10}{i.dist}', end='\n')


class Graph:

    def __init__(self, vertexes):
        self.vertexes = vertexes

    def add_edge_bettween(self, idx1, idx2, weight):
        v1, v2 = self.vertexes[idx1], self.vertexes[idx2]
        v1.add_adj(Edge(v2, weight))


class Vertex:

    def __init__(self, label):
        self.label = label
        self.dist = sys.maxsize
        self.is_visited = False
        self.adj = []

    def add_adj(self, edge):
        self.adj.append(edge)


class Edge:

    def __init__(self, vertex, weight):
        self.vertex = vertex
        self.weight = weight


def create_graph(data):
    graph = Graph([Vertex(f'V{i}') for i in range(len(data))])

    for i, line in enumerate(data):
        for j, v in enumerate(line):
            if v != 0:
                graph.add_edge_bettween(i, j, v)

    return graph


def alg_dijkstra(vertexes):

    heap, v_actl = [], vertexes[0]
    v_actl.dist = 0

    while not(v_actl is None):
        v_actl.is_visited = True

        for edge in v_actl.adj:
            sum_perc = v_actl.dist + edge.weight
            if not(edge.vertex.is_visited) and sum_perc < edge.vertex.dist:
                edge.vertex.dist = sum_perc
                heapq.heappush(heap, (sum_perc, edge.vertex))

        v_actl = get_min_vtx(heap)


def get_min_vtx(heap):

    v_min = None

    if len(heap) > 0:
        _, v_min = heapq.heappop(heap)
        while len(heap) > 0 and v_min.is_visited:
            _, v_min = heapq.heappop(heap)

    return v_min


main()
