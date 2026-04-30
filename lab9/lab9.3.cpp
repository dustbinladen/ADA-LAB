#include <iostream> 
#include <vector> 
#include <climits> 
using namespace std; 
 
#define N 4 
 
// Distance matrix 
int dist[N][N] = { 
    {0, 10, 15, 20}, 
    {10, 0, 35, 25}, 
    {15, 35, 0, 30}, 
    {20, 25, 30, 0}}; 
 
// DP table 
int dp[1 << N][N]; 
 
// Recursive TSP function 
int tsp(int mask, int pos) 
{ 
    // If all cities visited 
    if (mask == (1 << N) - 1) 
    { 
        cout << "Returning to start from city " << pos << endl; 
        return dist[pos][0]; 
    } 
 
    // If already computed 
    if (dp[mask][pos] != -1) 
        return dp[mask][pos]; 
 
    int minCost = INT_MAX; 
 
    cout << "\nCurrent Position: " << pos << ", Mask: " << mask << endl; 
 
    // Try all cities 
    for (int city = 0; city < N; city++) 
    { 
        // If city not visited 
        if ((mask & (1 << city)) == 0) 
        { 
            cout << "Trying city " << city << endl; 
 
            int newMask = mask | (1 << city); 
 
            int cost = dist[pos][city] + 
                       tsp(newMask, city); 
 
            cout << "Cost to city " << city << " = " << cost << endl; 
 
            if (cost < minCost) 
                minCost = cost; 
        } 
    } 
 
    return dp[mask][pos] = minCost; 
} 
 
int main() 
{ 
    // Initialize dp with -1 
    for (int i = 0; i < (1 << N); i++) 
    { 
        for (int j = 0; j < N; j++) 
        { 
            dp[i][j] = -1; 
        } 
    } 
 
    cout << "Distance Matrix:\n"; 
    for (int i = 0; i < N; i++) 
    { 
        for (int j = 0; j < N; j++) 
        { 
            cout << dist[i][j] << " "; 
        } 
        cout << endl; 
    } 
 
    cout << "\nStarting TSP from city 0...\n"; 
 
    int result = tsp(1, 0); 
 
    cout << "\nMinimum Traveling Cost: " << result << endl; 
 
    return 0; 
} 