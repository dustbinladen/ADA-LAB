 
#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int n; 
 
    cout << "Enter value of n: "; 
    cin >> n; 
 
    int a[100]; 
 
    cout << "Enter " << n - 1 << " elements:\n"; 
    for (int i = 0; i < n - 1; i++) 
    { 
        cin >> a[i]; 
    } 
 
    int sum = n * (n + 1) / 2; 
    int actual = 0; 
 
    for (int i = 0; i < n - 1; i++) 
    { 
        actual += a[i]; 
    } 
 
    int missing = sum - actual; 
 
    cout << "Missing number is: " << missing << endl; 
 
    return 0; 
} 