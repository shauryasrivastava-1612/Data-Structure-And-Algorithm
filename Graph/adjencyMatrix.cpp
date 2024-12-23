#include <iostream>
#include <vector>
using namespace std;

// Adjency Matrix
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