#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
 
int main() 
{ 
    string X = "ABCBDAB"; 
    string Y = "BDCABA"; 
 
    int n = X.size(), m = Y.size(); 
 
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0)); 
 
    // Build DP table 
    for (int i = 1; i <= n; i++) 
    { 
        for (int j = 1; j <= m; j++) 
        { 
            if (X[i - 1] == Y[j - 1]) 
                dp[i][j] = 1 + dp[i - 1][j - 1]; 
            else 
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); 
        } 
    } 
 
    cout << "Length of LCS: " << dp[n][m] << endl; 
 
    // Reconstruct LCS 
    string lcs = ""; 
    int i = n, j = m; 
 
    while (i > 0 && j > 0) 
    { 
        if (X[i - 1] == Y[j - 1]) 
        { 
            lcs += X[i - 1]; 
            i--; 
            j--; 
        } 
        else if (dp[i - 1][j] > dp[i][j - 1]) 
            i--; 
        else 
            j--; 
    } 
 
    reverse(lcs.begin(), lcs.end()); 
 
    cout << "LCS: " << lcs << endl; 
 
    return 0; 
}