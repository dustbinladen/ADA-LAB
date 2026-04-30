 
#include <iostream> 
using namespace std; 
 
bool isSafe(int graph[][4], int color[], int v, int c, int V) { 
    for (int i = 0; i < V; i++) 
        if (graph[v][i] && color[i] == c) return false; 
    return true; 
} 
 
bool graphColor(int graph[][4], int m, int color[], int v, int V) { 
    if (v == V) return true; 
    for (int c = 1; c <= m; c++) { 
        if (isSafe(graph, color, v, c, V)) { 
            color[v] = c; 
            if (graphColor(graph, m, color, v+1, V)) return true; 
            color[v] = 0; // backtrack 
        } 
    } 
    return false; 
} 
