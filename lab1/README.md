# Lab 1: Fundamental Algorithms Implementation

1. Bubble Sort

- **File:** bubblesort.cpp  
- **Aim:** Sort elements using Bubble Sort algorithm.  
- **Use Case:** Basic understanding of sorting techniques.  
- **Algorithm:**
  1. Compare adjacent elements.
  2. Swap if they are in wrong order.
  3. Repeat for all passes.
- **Time Complexity:** O(n²)

---

## 2. Exponentiation (Power Function)

- **File:** exponentiation.cpp  
- **Aim:** Compute power of a number efficiently.  
- **Use Case:** Used in mathematical computations and cryptography.  
- **Algorithm:**
  1. If power is 0, return 1.
  2. Recursively compute half power.
  3. If power is even → multiply halves.
  4. If odd → multiply extra base.
- **Time Complexity:** O(log n)

---
## 11. Bouncing Ball Simulation

- **File:** bouncing_ball.cpp  
- **Aim:** To simulate a bouncing ball using recursion and calculate the total distance travelled and final height after a given number of bounces.  

- **Use Case:** Useful in physics simulations, animation systems, and recursive modeling of repeated events.  

- **Approach:**
  1. Define two recursive functions:
     - `distance(h, r, n)` → calculates total distance travelled.
     - `finalHeight(h, r, n)` → calculates final height after n bounces.
  2. Each bounce reduces height by multiplying with rebound ratio `r`.
  3. Total distance includes upward and downward movement after each bounce.

- **Algorithm:**
  1. If number of bounces `n = 0`, return initial height `h`.
  2. For distance:
     - Add current height + twice the reduced height recursively.
  3. For final height:
     - Multiply height by rebound ratio recursively.
  4. Repeat until all bounces are processed.

- **Time Complexity:** O(n)  
- **Space Complexity:** O(n) (due to recursion stack)

## 4. First Duplicate Finder

- **File:** firstdup.cpp  
- **Aim:** Find the first repeating element in array.  
- **Use Case:** Detect duplicates in datasets.  
- **Algorithm:**
  1. Traverse array.
  2. Check if element already seen.
- **Time Complexity:** O(n)

---

## 5. Tower of Hanoi

- **File:** hanoi.cpp  
- **Aim:** Solve Tower of Hanoi using recursion.  
- **Use Case:** Classic recursion problem.  
- **Algorithm:**
  1. Move n-1 disks to helper.
  2. Move nth disk to destination.
  3. Move n-1 disks to destination.
- **Time Complexity:** O(2ⁿ)

---

## 6. Horner’s Rule

- **File:** horner.cpp  
- **Aim:** Evaluate polynomial efficiently.  
- **Use Case:** Reduces number of operations.  
- **Algorithm:**
  1. Start from highest degree.
  2. Multiply and add coefficients iteratively.
- **Time Complexity:** O(n)

---

## 7. Linear Search

- **File:** linearsearch.cpp  
- **Aim:** Search element sequentially.  
- **Use Case:** Works on unsorted arrays.  
- **Algorithm:**
  1. Traverse array.
  2. Compare each element.
- **Time Complexity:** O(n)

---

## 8. Missing Number Finder

- **File:** missingnum.cpp  
- **Aim:** Find missing element in sequence.  
- **Use Case:** Data validation.  
- **Algorithm:**
  1. Use sum or XOR method.
  2. Compare expected vs actual.
- **Time Complexity:** O(n)

---

## 9. Selection Sort

- **File:** selection.cpp  
- **Aim:** Sort using selection method.  
- **Use Case:** Simple sorting algorithm.  
- **Algorithm:**
  1. Find minimum element.
  2. Swap with current index.
- **Time Complexity:** O(n²)

---

## 10. String Permutations

- **File:** stringperm.cpp  
- **Aim:** Generate all permutations of string.  
- **Use Case:** Used in brute-force problems.  
- **Algorithm:**
  1. Fix a character.
  2. Permute remaining string recursively.
  3. Backtrack.
- **Time Complexity:** O(n × n!)

---
