 
#include <iostream> 
using namespace std; 
 
int linearSearch(int a[], int n, int key) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        if (a[i] == key) 
            return i; 
    } 
    return -1; 
} 
 
int main() 
{ 
    int a[] = {4, 2, 7, 1, 9}; 
    int n = 5; 
    int key = 7; 
 
    int result = linearSearch(a, n, key); 
 
    if (result != -1) 
        cout << "Element found at index: " << result; 
    else 
        cout << "Element not found"; 
 
    return 0; 
} 