# Lab 2: Sorting and Searching Algorithms

---

## 1. Insertion Sort

- **File:** lab2.1.cpp  
- **Aim:** To sort an array using the Insertion Sort algorithm.  

- **Use Case:** Efficient for small datasets and nearly sorted arrays.  

- **Algorithm:**
  1. Start from the second element.
  2. Compare it with previous elements.
  3. Shift larger elements one position ahead.
  4. Insert the current element at correct position.

- **Time Complexity:**
  - Best Case: O(n)  
  - Worst Case: O(n²)

---

## 2. Binary Search

- **File:** lab2.2.cpp  
- **Aim:** To search an element in a sorted array using Binary Search.  

- **Use Case:** Fast searching in sorted datasets.  

- **Algorithm:**
  1. Find the middle element.
  2. If target equals middle → return index.
  3. If target is smaller → search left half.
  4. Else → search right half.

- **Time Complexity:** O(log n)

---
