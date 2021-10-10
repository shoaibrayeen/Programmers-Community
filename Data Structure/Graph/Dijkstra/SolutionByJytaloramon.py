#
# Algorithm of Dijkstra
# @author Ramon Almeida
# @date 2021-10-09
#

import sys


def main():
    vertexes = [Vertex('v1'), Vertex('v2'), Vertex('v3'),
                Vertex('v4'), Vertex('v5'), Vertex('v6')]

    add_edge_bettween(vertexes[0], vertexes[1], 4)
    add_edge_bettween(vertexes[0], vertexes[3], 2)
    add_edge_bettween(vertexes[1], vertexes[3], 1)
    add_edge_bettween(vertexes[1], vertexes[2], 5)
    add_edge_bettween(vertexes[2], vertexes[3], 8)
    add_edge_bettween(vertexes[2], vertexes[5], 6)
    add_edge_bettween(vertexes[3], vertexes[4], 10)
    add_edge_bettween(vertexes[4], vertexes[5], 2)
    add_edge_bettween(vertexes[4], vertexes[2], 2)

    alg_dijkstra(vertexes)


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


def add_edge_bettween(v1, v2, weight):
    v1.add_adj(Edge(v2, weight))
    v2.add_adj(Edge(v1, weight))


def alg_dijkstra(vertexes):

    v_actl = vertexes[0]
    v_actl.dist = 0

    while not(v_actl is None):
        v_actl.is_visited = True
        for t in v_actl.adj:
            t.vertex.dist = v_actl.dist + t.weight
        v_actl = min_vtx(vertexes)

    print(vertexes[5].dist)


def min_vtx(vertexes):

    v_min = None
    for item in vertexes:
        if not(item.is_visited):
            if v_min is None:
                v_min = item
            elif item.dist < v_min.dist:
                v_min = item

    return v_min


main()