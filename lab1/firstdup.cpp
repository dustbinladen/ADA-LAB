#include <iostream> 
using namespace std; 
 
int firstDuplicate(int a[], int n) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        for (int j = i + 1; j < n; j++) 
        { 
            if (a[i] == a[j]) 
                return a[i]; 
        } 
    } 
    return -1; 
} 
 
int main() 
{ 
    int a[] = {2, 1, 3, 5, 3, 2}; 
    int n = 6; 
 
    cout << firstDuplicate(a, n); 
 
    return 0; 
}