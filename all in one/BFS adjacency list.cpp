#include <iostream>
#include <vector>
#include <queue>

class Graph {
    int numVertices;
    std::vector<std::vector<int>> adjList;  
public:
   
    Graph(int V) : numVertices(V), adjList(V) {}

    
    void addEdge(int v, int w) {
        adjList[v].push_back(w);
        adjList[w].push_back(v); 
    }


    void BFS(int s) {
        std::vector<bool> visited(numVertices, false);  
        std::queue<int> queue;
        visited[s] = true;
        queue.push(s);

        while (!queue.empty()) {
            s = queue.front();
            std::cout << s << " ";
            queue.pop();

           
            for (int i : adjList[s]) {
                if (!visited[i]) {  
                    visited[i] = true;
                    queue.push(i);
                }
            }
        }
    }
};

int main() {
    Graph graph(5);

    // Add edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    std::cout << "BFS Traversal (starting from vertex 0): ";
    graph.BFS(0);
    std::cout << std::endl;

    return 0;
}
/*
Output:
BFS Traversal (starting from vertex 0): 0 1 2 3 4 
*/