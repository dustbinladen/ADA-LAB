#include <iostream> 
using namespace std; 
 
struct Pair 
{ 
    int min, max; 
}; 
 
Pair findMinMax(int a[], int low, int high) 
{ 
    Pair p; 
 
    if (low == high) 
    { 
        p.min = p.max = a[low]; 
        return p; 
    } 
 
    if (high == low + 1) 
    { 
        if (a[low] < a[high]) 
        { 
            p.min = a[low]; 
            p.max = a[high]; 
        } 
        else 
        { 
            p.min = a[high]; 
            p.max = a[low]; 
        } 
        return p; 
    } 
 
    int mid = (low + high) / 2; 
 
    Pair left = findMinMax(a, low, mid); 
    Pair right = findMinMax(a, mid + 1, high); 
 
    p.min = (left.min < right.min) ? left.min : right.min; 
    p.max = (left.max > right.max) ? left.max : right.max; 
 
    return p; 
} 
 
int main() 
{ 
    int a[] = {5, 2, 9, 1, 6}; 
    int n = 5; 
 
    Pair result = findMinMax(a, 0, n - 1); 
 
    cout << "Min = " << result.min << endl; 
    cout << "Max = " << result.max << endl; 
 
    return 0; 
}