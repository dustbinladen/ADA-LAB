# Lab 9: Dynamic Programming and Optimization Problems

---

## 1. Floyd-Warshall Algorithm

- **File:** lab9.1.cpp  
- **Aim:** To find shortest paths between all pairs of vertices in a graph.  
- **Use Case:** Used in routing, network optimization, and graph analysis.  

- **Algorithm:**
  1. Initialize distance matrix.
  2. For each vertex k:
     - Update distances using intermediate vertex k.
  3. Repeat for all vertices.

- **Time Complexity:** O(n³)

---

## 2. Longest Common Subsequence (LCS)

- **File:** lab9.2.cpp  
- **Aim:** To find the longest subsequence common to two sequences.  
- **Use Case:** Used in DNA sequence analysis and text comparison.  

- **Algorithm:**
  1. Create DP table.
  2. If characters match → add 1.
  3. Else → take max of previous values.

- **Time Complexity:** O(n × m)

---

## 3. Travelling Salesperson Problem (TSP)

- **File:** lab9.3.cpp  
- **Aim:** To find the shortest route visiting all cities exactly once.  
- **Use Case:** Logistics, route planning, and optimization problems.  

- **Algorithm:**
  1. Use DP with bitmasking.
  2. Store visited cities as states.
  3. Compute minimum path cost recursively.

- **Time Complexity:** O(n² × 2ⁿ)

---

## 4. 0/1 Knapsack

- **File:** lab9.4.cpp  
- **Aim:** To maximize value within weight constraint.  
- **Use Case:** Resource allocation and decision making.  

- **Algorithm:**
  1. Create DP table.
  2. For each item:
     - Include or exclude it.
  3. Take maximum value.

- **Time Complexity:** O(n × W)

---
