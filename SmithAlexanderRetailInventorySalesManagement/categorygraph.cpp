#include "categorygraph.h"

CategoryGraph::CategoryGraph(int vertices) : numVertices(vertices), adjLists(vertices) {}

void CategoryGraph::addEdge(int src, int dest) {
    adjLists[src].push_back(dest); // add edge from src to dest
}

const std::list<int>& CategoryGraph::getAdjlist(int vertex) const {
    return adjLists[vertex];
}

void CategoryGraph::addVertex() {
    numVertices++;
    adjLists.resize(numVertices);
}
