#include <iostream> 
#include <fstream> 
#include <string> 
#define MAX 100000 
#include <ctime> 
using namespace std; 
 
// Merge function 
void merge(int arr[], int left, int mid, int right) 
{ 
    int n1 = mid - left + 1; 
    int n2 = right - mid; 
 
    int L[MAX], R[MAX]; 
 
    for (int i = 0; i < n1; i++) 
        L[i] = arr[left + i]; 
 
    for (int j = 0; j < n2; j++) 
        R[j] = arr[mid + 1 + j]; 
 
    int i = 0, j = 0, k = left; 
 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else 
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
 
// Merge Sort function 
void mergesort(int arr[], int left, int right) 
{ 
    if (left < right) 
    { 
        int mid = (left + right) / 2; 
 
        mergesort(arr, left, mid); 
        mergesort(arr, mid + 1, right); 
 
        merge(arr, left, mid, right); 
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
    mergesort(arr, 0, size - 1); 
    clock_t end = clock(); 
 
    double time_taken = double(end - start); 
 
    cout << "Sorted " << size << " numbers in " << time_taken << " ms"; 
 
    return 0;
}