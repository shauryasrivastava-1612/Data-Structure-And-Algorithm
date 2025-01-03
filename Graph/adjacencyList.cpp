#include <iostream>
#include <vector>
using namespace std;

// Adjacency List Representation of Graph:
// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to add an edge between two vertices
// void addEdge(vector<vector<int>>& adj, int i, int j) {
//     adj[i].push_back(j);
//     adj[j].push_back(i); // Undirected
// }

// // Function to display the adjacency list
// void displayAdjList(const vector<vector<int>>& adj) {
//     for (int i = 0; i < adj.size(); i++) {
//         cout << i << ": "; // Print the vertex
//         for (int j : adj[i]) {
//             cout << j << " "; // Print its adjacent
//         }
//         cout << endl; 
//     }
// }

// // Main function
// int main() {
//     // Create a graph with 4 vertices and no edges
//     int V = 4;
//     vector<vector<int>> adj(V); 

//     // Now add edges one by one
//     addEdge(adj, 0, 1);
//     addEdge(adj, 0, 2);
//     addEdge(adj, 1, 2);
//     addEdge(adj, 2, 3);

//     cout << "Adjacency List Representation:" << endl;
//     displayAdjList(adj);

//     return 0;
// }
// TC - O(v+e) , SC - O(v+e)

// unidirected unweighted graph
void UUG(int vertices, int edges)
{

    vector<int> adjList[vertices];

    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (int i = 0; i < vertices; i++)
    {
        cout << i << "->";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }
}

// undirected weighted graph
void UWG(int vertices, int edges)
{

    vector<pair<int, int>> adjList[vertices];

    int u, v, w;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjList[u].push_back(make_pair(v, w));
        adjList[v].push_back(make_pair(u, w));
    }

    for (int i = 0; i < vertices; i++)
    {
        cout << i << "->";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j].first << " " << adjList[i][j].second << " ";
        }
        cout << endl;
    }
}

// directed unweighted graph
void DUG(int vertices, int edges)
{

    vector<int> adjList[vertices];

    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (int i = 0; i < vertices; i++)
    {
        cout << i << "->";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }
}

// directed weighted graph
void DWG(int vertices, int edges)
{

    vector<pair<int, int>> adjList[vertices];

    int u, v, w;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjList[u].push_back(make_pair(v, w));
    }

    for (int i = 0; i < vertices; i++)
    {
        cout << i << "->";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j].first << " " << adjList[i][j].second << " ";
        }
        cout << endl;
    }
}

int main()
{

    int vertices;
    int edges;
    cin >> vertices;
    cin >> edges;

    // unidirected unweighted graph
    UUG(vertices, edges);

    // undirected weighted graph
    UWG(vertices, edges);

    // directed unweighted graph
    DUG(vertices, edges);

    // directed weighted graph
    DWG(vertices, edges);

    return 0;
}