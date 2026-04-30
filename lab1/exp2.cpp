 
#include <iostream> 
using namespace std; 
 
double distance(double h, double r, int n) 
{ 
    if (n == 0) 
        return h; 
 
    return h + 2 * distance(h * r, r, n - 1); 
} 
 
double finalHeight(double h, double r, int n) 
{ 
    if (n == 0) 
        return h; 
 
    return finalHeight(h * r, r, n - 1); 
} 
 
int main() 
{ 
    double h = 10; 
    double r = 0.5; 
    int n = 3; 
 
    cout << "Total Distance: " << distance(h, r, n) << endl; 
    cout << "Final Height: " << finalHeight(h, r, n) << endl; 
 
    return 0; 
}