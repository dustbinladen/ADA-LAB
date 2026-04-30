 
#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <climits> 
using namespace std; 
 
// BACKWARD (destination → source) 
int backwardPropagation(vector<vector<pair<int, int>>> &adj, int n, vector<int> &path) 
{ 
    vector<int> dist(n, INT_MAX), parent(n, -1); 
    dist[n - 1] = 0; 
 
    for (int i = n - 1; i >= 0; i--) 
    { 
        for (auto edge : adj[i]) 
        { 
            int v = edge.first, w = edge.second; 
            if (dist[v] != INT_MAX && dist[v] + w < dist[i]) 
            { 
                dist[i] = dist[v] + w; 
                parent[i] = v; 
            } 
        } 
    } 
 
    // Check if reachable 
    if (dist[0] == INT_MAX) 
    { 
        cout << "No path exists (Backward)\n"; 
        return -1; 
    } 
 
    int curr = 0; 
    while (curr != -1) 
    { 
        path.push_back(curr); 
        curr = parent[curr]; 
    } 
 
    return dist[0]; 
} 
 
// FORWARD (source → destination) 
int forwardPropagation(vector<vector<pair<int, int>>> &adj, int n, vector<int> &path) 
{ 
    vector<int> dist(n, INT_MAX), parent(n, -1); 
    dist[0] = 0; 
 
    for (int i = 0; i < n; i++) 
    { 
        for (auto edge : adj[i]) 
        { 
            int v = edge.first, w = edge.second; 
            if (dist[i] != INT_MAX && dist[i] + w < dist[v]) 
            { 
                dist[v] = dist[i] + w; 
                parent[v] = i; 
            } 
        } 
    } 
 
    // Check if reachable 
    if (dist[n - 1] == INT_MAX) 
    { 
        cout << "No path exists (Forward)\n"; 
        return -1; 
    } 
 
    int curr = n - 1; 
    while (curr != -1) 
    { 
        path.push_back(curr); 
        curr = parent[curr]; 
    } 
 
    reverse(path.begin(), path.end()); 
    return dist[n - 1]; 
} 
 
int main() 
{ 
    int n = 8; 
 
    vector<vector<pair<int, int>>> adj(n); 
 
    // Hardcoded multistage graph (DAG) 
    adj[0].push_back({1, 1}); 
    adj[0].push_back({2, 2}); 
    adj[0].push_back({3, 5}); 
    adj[1].push_back({4, 4}); 
    adj[1].push_back({5, 11}); 
    adj[2].push_back({4, 9}); 
    adj[2].push_back({5, 5}); 
    adj[3].push_back({6, 2}); 
    adj[6].push_back({7, 2}); 
 
    vector<int> path1, path2; 
 
    // Forward 
    int forwardDist = forwardPropagation(adj, n, path1); 
    if (forwardDist != -1) 
    { 
        cout << "Forward Distance: " << forwardDist << endl; 
        cout << "Forward Path: "; 
        for (int x : path1) 
            cout << x << " "; 
        cout << endl 
             << endl; 
    } 
 
    // Backward 
    int backwardDist = backwardPropagation(adj, n, path2); 
    if (backwardDist != -1) 
    { 
        cout << "Backward Distance: " << backwardDist << endl; 
        cout << "Backward Path: "; 
        for (int x : path2) 
            cout << x << " "; 
        cout << endl; 
    } 
 
    return 0; 
} 
