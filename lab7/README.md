# Lab 7: Multistage Graph (Forward & Backward Approach)

---

## 1. Multistage Graph Problem

- **File:** lab7.1.cpp  
- **Aim:** To find the shortest path in a multistage graph using forward and backward approaches.  

- **Use Case:** Used in optimization problems like shortest path in layered networks and decision-making systems.  

---

## Forward Approach

- **Algorithm:**
  1. Start from the source node.
  2. Move stage by stage towards the destination.
  3. At each stage, choose the minimum cost path.
  4. Store intermediate results for comparison.

---

## Backward Approach

- **Algorithm:**
  1. Start from the destination node.
  2. Move backward stage by stage.
  3. Calculate minimum cost from each node to destination.
  4. Use stored values to determine optimal path.

---

## Time Complexity

- **O(n²)** (depending on number of stages and edges)

---
