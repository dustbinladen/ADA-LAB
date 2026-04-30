# Lab 8: Matrix Chain Multiplication

---

## 1. Matrix Chain Multiplication (MCM)

- **File:** lab8.1.cpp  
- **Aim:** To determine the most efficient way to multiply a chain of matrices by minimizing the number of scalar multiplications.  

- **Use Case:** Used in compiler optimization, database query optimization, and scientific computations involving multiple matrix operations.  

---

## Algorithm

1. Represent matrices as a sequence of dimensions.
2. Define a DP table where `dp[i][j]` stores minimum cost of multiplying matrices from i to j.
3. For each possible split point k:
   - Compute cost = dp[i][k] + dp[k+1][j] + multiplication cost.
4. Take minimum over all k.
5. Final answer is stored in `dp[1][n]`.

---

## Time Complexity

- **O(n³)**

---

## Space Complexity

- **O(n²)**

---
