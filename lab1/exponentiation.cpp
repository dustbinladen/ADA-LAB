#include <iostream> 
using namespace std; 
 
long long power(long long a, long long n) 
{ 
    if (n == 0) 
        return 1; 
 
    long long half = power(a, n / 2); 
 
    if (n % 2 == 0) 
        return half * half; 
    else 
        return a * half * half; 
} 
 
int main() 
{ 
    long long a = 2, n = 10; 
    cout << power(a, n); 
    return 0; 
}