# Lab 4: Evaluation and Searching Techniques

---

## 1. Quick Sort (Iterative)

- **File:** lab4.1.cpp  
- **Aim:** To implement Quick Sort without recursion using an explicit stack.  
- **Use Case:** Useful when recursion depth needs to be controlled.  

- **Algorithm:**
  1. Initialize stack with start and end indices.
  2. Perform partitioning around a pivot.
  3. Push subarrays onto stack.
  4. Repeat until stack is empty.

- **Time Complexity:** O(n log n) average, O(n²) worst  

---

## 2. Binary Search (1/3 Division)

- **File:** lab4.2.cpp  
- **Aim:** To search an element by dividing the array into three parts.  
- **Use Case:** Variant of binary search for comparison of search strategies.  

- **Algorithm:**
  1. Divide array into three parts.
  2. Compare target with mid1 and mid2.
  3. Narrow search range accordingly.
  4. Repeat until element is found or range ends.

- **Time Complexity:** O(log₃ n)

---

## 3. Permutation Generator

- **File:** lab4.3.cpp  
- **Aim:** To generate all permutations of a given string/array.  
- **Use Case:** Used in combinatorics, brute-force problems, and puzzles.  

- **Algorithm:**
  1. Fix one element at a time.
  2. Recursively generate permutations for remaining.
  3. Swap back (backtracking).

- **Time Complexity:** O(n × n!)

---
