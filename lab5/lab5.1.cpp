#include <iostream> 
#include <algorithm> 
using namespace std; 
 
struct Item 
{ 
    int weight, value; 
}; 
 
// comparator for sorting 
bool cmp(Item a, Item b) 
{ 
    double r1 = (double)a.value / a.weight; 
    double r2 = (double)b.value / b.weight; 
    return r1 > r2; 
} 
 
int main() 
{ 
    int n = 3; 
    int W = 50; 
 
    Item arr[3] = {{10, 60}, {20, 100}, {30, 120}}; 
 
    sort(arr, arr + n, cmp); 
 
    double totalValue = 0.0; 
 
    for (int i = 0; i < n; i++) 
    { 
        if (W >= arr[i].weight) 
        { 
            W -= arr[i].weight; 
            totalValue += arr[i].value; 
        } 
        else 
        { 
            totalValue += arr[i].value * ((double)W / arr[i].weight); 
            break; 
        } 
    } 
 
    cout << "Maximum value = " << totalValue; 
 
    return 0; 
}