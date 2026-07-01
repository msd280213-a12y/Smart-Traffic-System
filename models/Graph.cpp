/*#include "Graph.h"
#include <iostream>

Graph::Graph(int vertices) {

    this->vertices = vertices;
}

void Graph::display() const {

    std::cout << "Graph has "
              << vertices
              << " vertices.\n";
}*/
/*#include "Graph.h"

#include <iostream>

using namespace std;

void Graph::addJunction(Junction j){

    junctions.push_back(j);

}

void Graph::addRoad(Road r){

    roads.push_back(r);

}

void Graph::displayGraph(){

    cout<<"========== Junctions =========="<<endl;

    for(auto j : junctions){

        j.display();

        cout<<endl;

    }

    cout<<"========== Roads =========="<<endl;

    for(auto r : roads){

        r.display();

        cout<<endl;

    }

}*/

/*#include "Graph.h"
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Constructor
Graph::Graph(int vertices)
{
    this->vertices = vertices;
    adj.resize(vertices);
}

// addEdge()
void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// displayGraph()
void Graph::displayGraph()
{
    for (int i = 0; i < vertices; i++)
    {
        cout << "Junction " << i << " -> ";

        for (int node : adj[i])
        {
            cout << node << " ";
        }

        cout << endl;
    }
}

//  ADD BFS HERE
void Graph::BFS(int start)
{
    vector<bool> visited(vertices, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        cout << current << " ";

        for (int neighbor : adj[current])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    cout << endl;
}

void Graph::DFS(int start)
{
    vector<bool> visited(vertices, false);
    stack<int> st;

    st.push(start);

    while (!st.empty())
    {
        int current = st.top();
        st.pop();

        if (visited[current])
            continue;

        visited[current] = true;
        cout << current << " ";

        for (int neighbor : adj[current])
        {
            if (!visited[neighbor])
            {
                st.push(neighbor);
            }
        }
    }

    cout << endl;
}*/

/*#include "Graph.h"
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Constructor
Graph::Graph(int vertices)
{
    this->vertices = vertices;
    adj.resize(vertices);
}

// Add Road
void Graph::addRoad(int source,
                    int destination,
                    double distance,
                    int speedLimit)
{
    // Add road from source to destination
    adj[source].push_back(
        Edge(destination, distance, speedLimit));

    // Since roads are bidirectional,
    // also add destination to source
    adj[destination].push_back(
        Edge(source, distance, speedLimit));
}

// Display Graph
void Graph::displayGraph()
{
    for (int i = 0; i < vertices; i++)
    {
        cout << "Junction " << i << " :" << endl;

        for (Edge road : adj[i])
        {
            cout << "   -> Destination : "
                 << road.destination << endl;

            cout << "      Distance    : "
                 << road.distance << " km" << endl;

            cout << "      Speed Limit : "
                 << road.speedLimit << " km/h" << endl;
        }

        cout << endl;
    }
}

// Breadth First Search
void Graph::BFS(int start)
{
    vector<bool> visited(vertices, false);

    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        cout << current << " ";

        for (Edge road : adj[current])
        {
            int neighbor = road.destination;

            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    cout << endl;
}

// Depth First Search
void Graph::DFS(int start)
{
    vector<bool> visited(vertices, false);

    stack<int> st;

    st.push(start);

    while (!st.empty())
    {
        int current = st.top();
        st.pop();

        if (visited[current])
            continue;

        visited[current] = true;

        cout << current << " ";

        for (Edge road : adj[current])
        {
            int neighbor = road.destination;

            if (!visited[neighbor])
            {
                st.push(neighbor);
            }
        }
    }

    cout << endl;
}*/

#include "Graph.h"
#include <iostream>
#include <queue>
#include <stack>
#include <limits>

using namespace std;

// =========================
// Constructor
// =========================

Graph::Graph(int vertices)
{
    this->vertices = vertices;
    adj.resize(vertices);
}

// =========================
// Add Road
// =========================

void Graph::addRoad(int source,
                    int destination,
                    double distance,
                    int speedLimit)
{
    // Add road from source to destination
    adj[source].push_back(
        Edge(destination, distance, speedLimit));

    // Since the graph is undirected,
    // also add the reverse road
    adj[destination].push_back(
        Edge(source, distance, speedLimit));
}

// =========================
// Display Graph
// =========================

void Graph::displayGraph()
{
    for (int i = 0; i < vertices; i++)
    {
        cout << "Junction " << i << ":" << endl;

        for (Edge road : adj[i])
        {
            cout << "   -> Destination : "
                 << road.destination << endl;

            cout << "      Distance    : "
                 << road.distance
                 << " km" << endl;

            cout << "      Speed Limit : "
                 << road.speedLimit
                 << " km/h" << endl;
        }

        cout << endl;
    }
}

// =========================
// Breadth First Search
// =========================

void Graph::BFS(int start)
{
    vector<bool> visited(vertices, false);

    queue<int> q;

    visited[start] = true;

    q.push(start);

    while (!q.empty())
    {
        int current = q.front();

        q.pop();

        cout << current << " ";

        for (Edge road : adj[current])
        {
            int neighbor = road.destination;

            if (!visited[neighbor])
            {
                visited[neighbor] = true;

                q.push(neighbor);
            }
        }
    }

    cout << endl;
}

// =========================
// Depth First Search
// =========================

void Graph::DFS(int start)
{
    vector<bool> visited(vertices, false);

    stack<int> st;

    st.push(start);

    while (!st.empty())
    {
        int current = st.top();

        st.pop();

        if (visited[current])
        {
            continue;
        }

        visited[current] = true;

        cout << current << " ";

        for (Edge road : adj[current])
        {
            int neighbor = road.destination;

            if (!visited[neighbor])
            {
                st.push(neighbor);
            }
        }
    }

    cout << endl;
}

// =========================
// Dijkstra Algorithm
// =========================

void Graph::dijkstra(int source)
{
    // Distance array
    vector<double> dist(
        vertices,
        numeric_limits<double>::max());

    // Min Priority Queue
    priority_queue<
        pair<double, int>,
        vector<pair<double, int>>,
        greater<pair<double, int>>
    > pq;

    // Distance from source to itself
    dist[source] = 0;

    pq.push({0, source});

    while (!pq.empty())
    {
        double currentDistance = pq.top().first;

        int currentNode = pq.top().second;

        pq.pop();

        // Ignore outdated entries
        if (currentDistance > dist[currentNode])
        {
            continue;
        }

        for (Edge road : adj[currentNode])
        {
            int nextNode = road.destination;

            double weight = road.distance;

            if (dist[currentNode] + weight
                < dist[nextNode])
            {
                dist[nextNode] =
                    dist[currentNode] + weight;

                pq.push(
                    {dist[nextNode], nextNode});
            }
        }
    }

    cout << endl;

    cout << "========== SHORTEST DISTANCES =========="
         << endl;

    cout << "Source Junction : "
         << source
         << endl
         << endl;

    for (int i = 0; i < vertices; i++)
    {
        cout << "To Junction "
             << i
             << " = "
             << dist[i]
             << " km"
             << endl;
    }
}