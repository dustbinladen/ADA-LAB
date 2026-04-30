 
#include <iostream> 
#include <algorithm> 
using namespace std; 
 
struct Activity 
{ 
    int start, finish; 
}; 
 
bool cmp(Activity a, Activity b) 
{ 
    return a.finish < b.finish; 
} 
 
int main() 
{ 
    Activity arr[] = {{1, 3}, {2, 5}, {4, 6}, {6, 7}, {5, 9}}; 
    int n = 5; 
 
    sort(arr, arr + n, cmp); 
 
    cout << "Selected activities:\n"; 
 
    int i = 0; 
    cout << "(" << arr[i].start << ", " << arr[i].finish << ")\n"; 
 
    for (int j = 1; j < n; j++) 
    { 
        if (arr[j].start >= arr[i].finish) 
        { 
            cout << "(" << arr[j].start << ", " << arr[j].finish << ")\n"; 
            i = j; 
        } 
    } 
 
    return 0; 
} 