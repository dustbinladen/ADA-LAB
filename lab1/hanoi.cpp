#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Bubble Sort implementation
void bubble(int arr[], int n) {
    for (int pass = 0; pass < n - 1; pass++) {
        for (int i = 0; i < n - pass - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main() {
    srand(time(0));

    cout << "InputSize\tAverageTime(seconds)\n";

    // Varying input sizes
    for (int size = 1000; size <= 20000; size += 1000) {

        double totalTime = 0;

        // Running multiple times for average
        for (int trial = 0; trial < 100; trial++) {

            int* arr = new int[size];

            // Filling array with random values
            for (int i = 0; i < size; i++) {
                arr[i] = rand();
            }

            clock_t start = clock();
            bubble(arr, size);
            clock_t end = clock();

            totalTime += double(end - start) / CLOCKS_PER_SEC;

            delete[] arr;
        }

        cout << size << "\t\t" << totalTime / 100 << endl;
    }

    return 0;
}