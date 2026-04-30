#include <iostream> 
#include <fstream> 
#include <string> 
#define MAX 100000 
#include <ctime> 
using namespace std; 
 
void insertionsort(int arr[], int size) 
{ 
    int key, j; 
    for (int i = 1; i < size; i++) 
    { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key) 
        { 
            arr[j + 1] = arr[j]; 
            j--; 
        } 
        arr[j + 1] = key; 
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
    insertionsort(arr, size); 
    clock_t end = clock(); 
 
    double time_taken = double(end - start); 
 
    cout << "Sorted " << size << " numbers in " << time_taken << " ms"; 
 
    return 0; 
} 