#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
 
struct Pair { 
    int weight, value; 
}; 
 
// Generate all subsets for a half and store (weight, value) pairs 
void generateSubsets(int w[], int v[], int n, vector<Pair>& subsets) { 
    int total = (1 << n); // 2^n subsets 
    for (int mask = 0; mask < total; mask++) { 
        int tw = 0, tv = 0; 
        for (int i = 0; i < n; i++) { 
            if (mask & (1 << i)) { 
                tw += w[i]; 
                tv += v[i]; 
            } 
        } 
        subsets.push_back({tw, tv}); 
    } 
} 
 
// Merge-Purge: remove dominated pairs 
// A pair (w1,v1) is dominated by (w2,v2) if w2<=w1 and v2>=v1 
void mergePurge(vector<Pair>& subsets) { 
    // Sort by weight ascending, then value descending 
    sort(subsets.begin(), subsets.end(), [](Pair a, Pair b) { 
        if (a.weight != b.weight) return a.weight < b.weight; 
        return a.value > b.value; 
    }); 
 
    // Purge dominated pairs 
    // Keep only pairs where value strictly increases 
    vector<Pair> purged; 
    int maxVal = -1; 
    for (auto& p : subsets) { 
        if (p.value > maxVal) { 
            purged.push_back(p); 
            maxVal = p.value; 
        } 
    } 
    subsets = purged; 
} 
 
int horowitz_sahni(int w[], int v[], int n, int W) { 
    int half1 = n / 2; 
    int half2 = n - half1; 
 
    // Generate subsets for both halves 
    vector<Pair> L, R; 
    generateSubsets(w,        v,        half1, L); 
    generateSubsets(w+half1,  v+half1,  half2, R); 
 
    // Apply Merge-Purge on both lists 
    mergePurge(L); 
    mergePurge(R); 
 
    // Sort R by weight ascending for binary search 
    sort(R.begin(), R.end(), [](Pair a, Pair b){ 
        return a.weight < b.weight; 
    }); 
 
    // For each pair in L, binary search best pair in R 
    // such that L.weight + R.weight <= W 
    int maxValue = 0; 
 
    for (auto& lp : L) { 
        if (lp.weight > W) continue; 
 
        int rem = W - lp.weight; 
 
        // Binary search in R: largest weight <= rem 
        int lo = 0, hi = (int)R.size() - 1, best = -1; 
        while (lo <= hi) { 
            int mid = (lo + hi) / 2; 
            if (R[mid].weight <= rem) { 
                best = mid; 
                lo = mid + 1; 
            } else { 
                hi = mid - 1; 
            } 
        } 
 
        if (best != -1) { 
            maxValue = max(maxValue, lp.value + R[best].value); 
        } 
    } 
 
    return maxValue; 
} 
 
int main() { 
    int n, W; 
    cout << "Enter number of items: "; 
    cin >> n; 
    cout << "Enter knapsack capacity: "; 
    cin >> W; 
 
    int w[n], v[n]; 
    cout << "Enter weights: "; 
    for (int i = 0; i < n; i++) cin >> w[i]; 
    cout << "Enter values: "; 
    for (int i = 0; i < n; i++) cin >> v[i]; 
 
    int result = horowitz_sahni(w, v, n, W); 
    cout << "\nMaximum value = " << result << endl; 
 
    return 0; 
} 
