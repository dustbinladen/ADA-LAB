 
#include <iostream> 
using namespace std; 
 
void permute(int a[], int k, int n) 
{ 
    if (k == n) 
    { 
        for (int i = 0; i < n; i++) 
            cout << a[i] << " "; 
        cout << endl; 
    } 
    else 
    { 
        for (int i = k; i < n; i++) 
        { 
            swap(a[k], a[i]); 
            permute(a, k + 1, n); 
            swap(a[k], a[i]); // backtrack 
        } 
    } 
} 
 
int main() 
{ 
    int a[] = {1, 2, 3}; 
    int n = 3; 
 
    permute(a, 0, n); 
 
    return 0; 
}