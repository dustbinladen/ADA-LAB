#include <iostream> 
using namespace std; 
 
void P(int a[], int k, int n) 
{ 
    if (k == n) 
    { 
        for (int i = 1; i <= n; i++) 
            cout << a[i] << " "; 
        cout << endl; 
    } 
    else 
    { 
        for (int i = k; i <= n; i++) 
        { 
            swap(a[i], a[k]); 
            P(a, k + 1, n); 
            swap(a[i], a[k]); 
        } 
    } 
} 
 
int main() 
{ 
    int n = 3; 
 
    int a[4] = {0, 1, 2, 3}; 
 
    P(a, 1, n); 
 
    return 0; 
}