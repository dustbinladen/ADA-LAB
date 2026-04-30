 
#include <iostream> 
#include <fstream> 
#include <string> 
#define MAX 100000 
#include <ctime> 
using namespace std; 
 
// Partition function 
int partition(int arr[], int low, int high) 
{ 
    int pivot = arr[high]; // last element as pivot 
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
    return i + 1; 
} 
 
// Quick Sort function 
void quicksort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
 
        quicksort(arr, low, pi - 1); 
        quicksort(arr, pi + 1, high); 
    } 
} 
 
int main() 
{ 
    int size; 
    cout << "Enter file size to read (10, 100, 1000, 10000, 100000): "; 
    cin >> size; 
 
    string filename = to_string(size) + ".txt"; 
    ifstream fin(filename); 
 
    int arr[MAX]; 
    for (int i = 0; i < size; i++) 
    { 
        fin >> arr[i]; 
    } 
    fin.close(); 
 
    clock_t start = clock(); 
    quicksort(arr, 0, size - 1); 
    clock_t end = clock(); 
 
    double time_taken = double(end - start); 
 
    cout << "Sorted " << size << " numbers in " << time_taken << " ms"; 
 
    return 0; 
} 