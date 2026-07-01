/*#ifndef GRAPH_H
#define GRAPH_H

class Graph {

private:
    int vertices;

public:
    Graph(int vertices);

    void display() const;
};

#endif */

/*#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

#include "Junction.h"
#include "Road.h"

using namespace std;

class Graph {

private:

    vector<Junction> junctions;

    vector<Road> roads;

public:

    void addJunction(Junction j);

    void addRoad(Road r);

    void displayGraph();

};

#endif*/


/*#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

class Graph {

private:

    int vertices;

    std::vector<std::vector<int>> adj;

public:

    Graph(int vertices);

    void addEdge(int u, int v);

    void displayGraph();

    void BFS(int start);

    void DFS(int start);

};

#endif  */

/*#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

// Structure representing one road
struct Edge
{
    int destination;
    double distance;
    int speedLimit;

    Edge(int dest, double dist, int speed)
    {
        destination = dest;
        distance = dist;
        speedLimit = speed;
    }
};

class Graph
{
private:

    int vertices;

    // Adjacency list storing roads
    std::vector<std::vector<Edge>> adj;

public:

    // Constructor
    Graph(int vertices);

    // Add a road
    void addRoad(int source,
                 int destination,
                 double distance,
                 int speedLimit);

    // Display graph
    void displayGraph();

    // Breadth First Search
    void BFS(int start);

    // Depth First Search
    void DFS(int start);
};

#endif*/


#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <queue>
#include <limits>

// Structure representing one road
struct Edge
{
    int destination;
    double distance;
    int speedLimit;

    Edge(int dest, double dist, int speed)
    {
        destination = dest;
        distance = dist;
        speedLimit = speed;
    }
};

class Graph
{
private:

    int vertices;

    // Adjacency list storing roads
    std::vector<std::vector<Edge>> adj;

public:

    // Constructor
    Graph(int vertices);

    // Add a road
    void addRoad(int source,
                 int destination,
                 double distance,
                 int speedLimit);

    // Display graph
    void displayGraph();

    // Breadth First Search
    void BFS(int start);

    // Depth First Search
    void DFS(int start);

    // Dijkstra's Algorithm
    void dijkstra(int source);
};

#endif