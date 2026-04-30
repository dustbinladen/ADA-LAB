# Lab 10: Backtracking and Graph Coloring Problems

---

## 1. N-Queens Problem

- **File:** Nqueens.cpp  
- **Aim:** To place N queens on an N×N chessboard such that no two queens attack each other.  
- **Use Case:** Classic backtracking problem for constraint satisfaction.  

- **Algorithm:**
  1. Place queen row by row.
  2. Check for safe position (column, diagonal).
  3. Backtrack if conflict occurs.

- **Time Complexity:** O(n!)

---

## 2. Subset Sum Problem

- **File:** lab10.cpp  
- **Aim:** To find subsets whose sum equals a given value.  
- **Use Case:** Used in decision-making and combinatorial problems.  

- **Algorithm:**
  1. Include or exclude each element.
  2. Recursively explore all subsets.
  3. Check if sum matches target.

- **Time Complexity:** O(2ⁿ)

---

## 3. Chromatic Number (Graph Coloring)

- **File:** lab10.1.cpp  
- **Aim:** To color a graph using minimum number of colors such that no adjacent vertices share the same color.  
- **Use Case:** Scheduling, register allocation in compilers.  

- **Algorithm:**
  1. Assign colors to vertices.
  2. Check constraints for adjacency.
  3. Backtrack if invalid assignment.

- **Time Complexity:** Exponential

---

---
