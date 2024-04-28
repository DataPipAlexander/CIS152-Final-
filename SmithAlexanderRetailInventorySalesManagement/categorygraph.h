#ifndef CATEGORYGRAPH_H
#define CATEGORYGRAPH_H

#include <vector>
#include <list>

    class CategoryGraph {
private:
    int numVertices; // Number of vertices
    std::vector<std::list<int>> adjLists; // Adjacency lists

public:
    CategoryGraph(int vertices);
    void addEdge(int src, int dest);
    const std::list<int>& getAdjlist(int vertex) const;
    void addVertex(); // Add the addVertex member function
};

#endif // CATEGORYGRAPH_H
