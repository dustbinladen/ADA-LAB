#include <iostream> 
using namespace std; 
 
#define N 5 
#define INF 99999 
 
struct graph 
{ 
    int arr[N + 1][N + 1] = {0}; 
 
    void g(int i, int j, int wt) 
    { 
        arr[i][j] = wt; 
    } 
 
    void display() 
    { 
        cout << "Adjacency Matrix:\n"; 
        for (int i = 1; i <= N; i++) 
        { 
            for (int j = 1; j <= N; j++) 
            { 
                cout << arr[i][j] << " "; 
            } 
            cout << endl; 
        } 
    } 
 
    void dijkstra(int source) 
    { 
        int dist[N + 1]; 
        bool visited[N + 1] = {false}; 
 
        for (int i = 1; i <= N; i++) 
            dist[i] = INF; 
 
        dist[source] = 0; 
 
        for (int count = 1; count <= N - 1; count++) 
        { 
            int u = -1; 
            int min = INF; 
 
            for (int i = 1; i <= N; i++) 
            { 
                if (!visited[i] && dist[i] < min) 
                { 
                    min = dist[i]; 
                    u = i; 
                } 
            } 
 
            visited[u] = true; 
 
            for (int v = 1; v <= N; v++) 
            { 
                if (arr[u][v] != 0 && !visited[v] && dist[u] + arr[u][v] < dist[v]) 
                { 
                    dist[v] = dist[u] + arr[u][v]; 
                } 
            } 
        } 
 
        cout << "\nShortest distances from vertex " 
             << source << ":\n"; 
 
        for (int i = 1; i <= N; i++) 
            cout << "To " << i << " = " << dist[i] << endl; 
    } 
}; 
 
int main() 
{ 
    graph c; 
 
    c.g(1, 5, 4); 
    c.g(1, 2, 3); 
    c.g(5, 3, 2); 
    c.g(5, 4, 6); 
    c.g(3, 4, 5); 
    c.g(2, 5, 2); 
    c.g(2, 4, 8); 
 
    c.display(); 
 
    c.dijkstra(1); 
 
    return 0; 
} 
