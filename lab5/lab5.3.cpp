#include <iostream> 
using namespace std; 
 
int partition(int a[], int low, int high) 
{ 
    int pivot = a[high]; 
    int i = low; 
 
    for (int j = low; j < high; j++) 
    { 
        if (a[j] <= pivot) 
        { 
            swap(a[i], a[j]); 
            i++; 
        } 
    } 
 
    swap(a[i], a[high]); 
    return i; 
} 
 
int kthSmallest(int a[], int low, int high, int k) 
{ 
    if (low <= high) 
    { 
        int pi = partition(a, low, high); 
 
        if (pi == k - 1) 
            return a[pi]; 
        else if (pi > k - 1) 
            return kthSmallest(a, low, pi - 1, k); 
        else 
            return kthSmallest(a, pi + 1, high, k); 
    } 
    return -1; 
} 
 
int main() 
{ 
    int a[] = {7, 10, 4, 3, 20, 15}; 
    int n = 6, k = 3; 
 
    cout << "Kth smallest = " << kthSmallest(a, 0, n - 1, k); 
 
    return 0; 
}