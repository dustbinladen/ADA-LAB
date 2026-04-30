
# Lab 5: Optimization and Selection Algorithms

---

## 1. Fractional Knapsack

- **File:** lab5.1.cpp  
- **Aim:** To maximize profit by selecting items based on value-to-weight ratio.  
- **Use Case:** Used in resource allocation problems where fractional selection is allowed.  

- **Algorithm:**
  1. Calculate value/weight ratio for each item.
  2. Sort items in descending order of ratio.
  3. Pick items fully or fractionally until capacity is filled.

- **Time Complexity:** O(n log n)

---

## 2. Convex Hull

- **File:** lab5.2.cpp  
- **Aim:** To find the smallest convex polygon enclosing all given points.  
- **Use Case:** Used in computational geometry, graphics, and GIS systems.  

- **Algorithm (Graham Scan / Jarvis March):**
  1. Find starting point (lowest y-coordinate).
  2. Sort points based on angle.
  3. Traverse and maintain convex boundary.

- **Time Complexity:** O(n log n)

---

## 3. Kth Smallest Element

- **File:** lab5.3.cpp  
- **Aim:** To find the kth smallest element in an array.  
- **Use Case:** Used in ranking and selection problems.  

- **Algorithm:**
  1. Use sorting or selection method (like QuickSelect).
  2. Return kth position element.

- **Time Complexity:** O(n log n) (sorting) / O(n) average (QuickSelect)

---

## 4. Max-Min (Maximum and Minimum)

- **File:** lab5.4.cpp  
- **Aim:** To find both maximum and minimum elements efficiently.  
- **Use Case:** Reduces number of comparisons compared to naive approach.  

- **Algorithm:**
  1. Compare elements in pairs.
  2. Update min and max accordingly.

- **Time Complexity:** O(n)

---
