#include <iostream> 
using namespace std; 
 
int binarySearch(int a[], int n, int key) 
{ 
    int low = 0, high = n - 1; 
 
    while (low <= high) 
    { 
        int mid = (low + high) / 2; 
 
        if (a[mid] == key) 
            return mid; 
        else if (key < a[mid]) 
            high = mid - 1; 
        else 
            low = mid + 1; 
    } 
 
    return -1; 
} 
 
int main() 
{ 
    int a[] = {1, 3, 5, 7, 9}; 
    int n = 5; 
    int key = 7; 
 
    int result = binarySearch(a, n, key); 
 
    if (result != -1) 
        cout << "Element found at index: " << result; 
    else 
        cout << "Element not found"; 
 
    return 0; 
}