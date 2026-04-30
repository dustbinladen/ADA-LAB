 
#include <iostream> 
using namespace std; 
 
bool isSafe(int board[], int row, int col) { 
    for (int i = 0; i < col; i++) { 
        if (board[i] == row || abs(board[i]-row) == abs(i-col)) 
            return false; 
    } 
    return true; 
} 
 
void solveNQ(int board[], int col, int n) { 
    if (col == n) { 
        for (int i = 0; i < n; i++) cout << board[i]+1 << " "; 
        cout << endl; return; 
    } 
    for (int row = 0; row < n; row++) { 
        if (isSafe(board, row, col)) { 
            board[col] = row; 
            solveNQ(board, col+1, n); 
        } 
    } 
} 