#include <iostream> 
using namespace std; 
 
void subsetSum(int arr[], int subset[], int n, int index, int current, int target, int 
subSize) { 
    if (current == target) { 
        for (int i = 0; i < subSize; i++) cout << subset[i] << " "; 
        cout << endl; return; 
    } 
    for (int i = index; i < n; i++) { 
        subset[subSize] = arr[i]; 
        subsetSum(arr, subset, n, i+1, current+arr[i], target, subSize+1); 
    } 
}