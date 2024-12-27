#include <iostream>
#include <vector>
using namespace std;

// Adjacency Matrix Representation of Graph Data Structure:
// C++ program to demonstrate Adjacency Matrix
// representation of undirected and unweighted graph
// #include <bits/stdc++.h>
// using namespace std;

// void addEdge(vector<vector<int>> &mat, int i, int j)
// {
//     mat[i][j] = 1;
//     mat[j][i] = 1; // Since the graph is undirected
// }

// void displayMatrix(vector<vector<int>> &mat)
// {
//     int V = mat.size();
//     for (int i = 0; i < V; i++)
//     {
//         for (int j = 0; j < V; j++)
//             cout << mat[i][j] << " ";
//         cout << endl;
//     }
// }

// int main()
// {
//     // Create a graph with 4 vertices and no edges
//     // Note that all values are initialized as 0
//     int V = 4;
//     vector<vector<int>> mat(V, vector<int>(V, 0));

//     // Now add edges one by one
//     addEdge(mat, 0, 1);
//     addEdge(mat, 0, 2);
//     addEdge(mat, 1, 2);
//     addEdge(mat, 2, 3);

//     /* Alternatively we can also create using below
//        code if we know all edges in advacem

//      vector<vector<int>> mat = {{ 0, 1, 0, 0 },
//                                { 1, 0, 1, 0 },
//                                { 0, 1, 0, 1 },
//                                { 0, 0, 1, 0 } }; */

//     cout << "Adjacency Matrix Representation" << endl;
//     displayMatrix(mat);

//     return 0;
// }
// TC - O(v^2) | SC - O(v^2)
// v - vertices

// undirected unweighted graph
void UUG(int vertices, int edges)
{

    vector<vector<bool>> adjMat(vertices, vector<bool>(vertices, 0));

    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }

    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
}

// directed unweighted graph
void DUG(int vertices, int edges)
{

    vector<vector<bool>> adjMat(vertices, vector<bool>(vertices, 0));

    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjMat[u][v] = 1;
    }

    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
}

// undirected weighted graph
void UWG(int vertices, int edges)
{

    vector<vector<int>> adjMat(vertices, vector<int>(vertices, 0));

    int u, v, w;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjMat[u][v] = w;
        adjMat[v][u] = w;
    }

    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
}

// directed weighted graph
void DWG(int vertices, int edges)
{

    vector<vector<int>> adjMat(vertices, vector<int>(vertices, 0));

    int u, v, w;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjMat[u][v] = w;
    }

    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int vertices;
    int edges;
    cin >> vertices >> edges;

    // undirected unweighted graph
    // UUG(vertices , edges) ;
    // directed unweighted graph
    // DUG(vertices,edges) ;
    // undirected weighted graph
    // UWG (vertices , edges) ;
    // directed weighted graph
    DWG(vertices, edges);

    return 0;
}