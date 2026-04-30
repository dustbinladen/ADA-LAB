# Lab 6: Graph Algorithms and Greedy Techniques

---

## 1. Dijkstra’s Algorithm

- **File:** lab6.1.cpp  
- **Aim:** To find the shortest path from a source vertex to all other vertices.  
- **Use Case:** Used in navigation systems, routing protocols, and maps.  

- **Algorithm:**
  1. Initialize distances from source to all vertices as infinity.
  2. Set source distance to 0.
  3. Pick the minimum distance vertex.
  4. Update distances of adjacent vertices.
  5. Repeat until all vertices are visited.

- **Time Complexity:** O(V²) (or O(E log V) using priority queue)

---

## 2. Prim’s Algorithm

- **File:** lab6.2.cpp  
- **Aim:** To find the Minimum Spanning Tree (MST) of a graph.  
- **Use Case:** Used in network design (roads, cables).  

- **Algorithm:**
  1. Start from any vertex.
  2. Select the minimum weight edge connecting visited and unvisited vertices.
  3. Add it to MST.
  4. Repeat until all vertices are included.

- **Time Complexity:** O(E log V)

---

## 3. Activity Selection

- **File:** lab6.3.cpp  
- **Aim:** To select maximum number of non-overlapping activities.  
- **Use Case:** Scheduling problems.  

- **Algorithm:**
  1. Sort activities by finishing time.
  2. Select first activity.
  3. Select next activity with start ≥ last finish time.

- **Time Complexity:** O(n log n)

---
## 4. Kruskal’s Algorithm

- **File:** lab6.4.cpp  
- **Aim:** To find Minimum Spanning Tree using edge sorting.  
- **Use Case:** Network optimization.  

- **Algorithm:**
  1. Sort edges by weight.
  2. Pick smallest edge.
  3. Add if it doesn’t form cycle.
  4. Repeat until MST is formed.

- **Time Complexity:** O(E log E)

---
