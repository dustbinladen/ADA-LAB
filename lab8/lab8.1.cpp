#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <climits> 
using namespace std; 
 
// MCM using recursion + memoization 
int matrixMin(vector<int> &arr, int i, int j, vector<vector<int>> &dp, vector<vector<int>> &S) 
{ 
    if (i == j) 
        return 0; 
 
    if (dp[i][j] != -1) 
        return dp[i][j]; 
 
    int minCost = INT_MAX; 
 
    for (int k = i; k < j; k++) 
    { 
        int cost1 = matrixMin(arr, i, k, dp, S); 
        int cost2 = matrixMin(arr, k + 1, j, dp, S); 
        int costMultiply = arr[i - 1] * arr[k] * arr[j]; 
 
        int total = cost1 + cost2 + costMultiply; 
 
        if (total < minCost) 
        { 
            minCost = total; 
            S[i][j] = k; 
        } 
    } 
 
    return dp[i][j] = minCost; 
} 
 
// Print optimal parenthesization 
void printPath(int i, int j, vector<vector<int>> &S) 
{ 
    if (i == j) 
    { 
        cout << "A" << i; 
        return; 
    } 
 
    cout << "("; 
    printPath(i, S[i][j], S); 
    printPath(S[i][j] + 1, j, S); 
    cout << ")"; 
} 
 
int main() 
{ 
    int n; 
    cout << "Enter number of dimensions: "; 
    cin >> n; 
 
    vector<int> arr(n); 
 
    cout << "Enter dimensions array:\n"; 
    for (int i = 0; i < n; i++) 
        cin >> arr[i]; 
 
    vector<vector<int>> dp(n, vector<int>(n, -1)); 
    vector<vector<int>> S(n, vector<int>(n, -1)); 
 
    int minCost = matrixMin(arr, 1, n - 1, dp, S); 
 
    cout << "\nMinimum multiplication cost: " << minCost << endl; 
 
    cout << "Optimal Parenthesization: "; 
    printPath(1, n - 1, S); 
    cout << endl; 
 
    cout << "\nDP Table:\n"; 
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++) 
            cout << dp[i][j] << " "; 
        cout << endl; 
    } 
 
    cout << "\nSplit Table (S):\n"; 
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++) 
            cout << S[i][j] << " "; 
        cout << endl; 
    } 
 
return 0; 
} 