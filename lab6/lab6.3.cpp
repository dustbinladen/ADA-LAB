 
#include <iostream> 
using namespace std; 
 
#define N 4 
 
// DFS to check connectivity 
void dfs(int graph[N][N], bool visited[], int v) 
{ 
    visited[v] = true; 
 
    for (int i = 0; i < N; i++) 
    { 
        if (graph[v][i] && !visited[i]) 
            dfs(graph, visited, i); 
    } 
} 
 
bool isConnected(int graph[N][N]) 
{ 
    bool visited[N] = {false}; 
 
    dfs(graph, visited, 0); 
 
    for (int i = 0; i < N; i++) 
        if (!visited[i]) 
            return false; 
 
    return true; 
} 
 
int main() 
{ 
    int graph[N][N] = { 
        {0, 1, 3, 0}, 
        {1, 0, 2, 4}, 
        {3, 2, 0, 5}, 
        {0, 4, 5, 0}}; 
 
    // try removing edge (2,3) 
    graph[2][3] = graph[3][2] = 0; 
 
    if (isConnected(graph)) 
        cout << "Edge removed (cycle deleted)"; 
    else 
        cout << "Edge needed (cannot delete)"; 
 
    return 0; 
} 