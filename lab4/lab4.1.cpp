#include <iostream> 
using namespace std; 
 
void quicksort(int arr[], int low, int high) 
{ 
    int stack[100]; 
    int top = -1; 
 
    stack[++top] = low; 
    stack[++top] = high; 
 
    while (top >= 0) 
    { 
        high = stack[top--]; 
        low = stack[top--]; 
 
        int pivot = arr[high]; 
        int i = low - 1; 
 
        for (int j = low; j < high; j++) 
        { 
            if (arr[j] < pivot) 
            { 
                i++; 
                swap(arr[i], arr[j]); 
            } 
        } 
 
        swap(arr[i + 1], arr[high]); 
        int pi = i + 1; 
 
        if (pi - 1 > low) 
        { 
            stack[++top] = low; 
            stack[++top] = pi - 1; 
        } 
 
        if (pi + 1 < high) 
        { 
            stack[++top] = pi + 1; 
            stack[++top] = high; 
        } 
    } 
} 
 
int main() 
{ 
    int a[] = {5, 2, 9, 1, 6}; 
    int n = 5; 
 
    quicksort(a, 0, n - 1); 
 
    for (int i = 0; i < n; i++) 
        cout << a[i] << " "; 
}