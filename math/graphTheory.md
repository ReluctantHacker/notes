# Chapter 1 - The Basic
Some ideas or concept is overlap and shared with Topology
## types of graphs
### Directed vs Undirected
### Weighted, Bipartite, Complete, Planar, Trees

## Connectivity
### Path, Cycles, Connected Components
### Eulerian Paths and Circuits
**Eulerian Path** is a path uses every edge exactly once. Very similar but different from **Hamiltonian Path** which is A path that visits every vertex exactly once. 

For Eulerian Path, Vertices may be visited multiple times.

For Hamiltonian Path, Edges can be skipped; not all edges need to be used. Hamiltonian pathes are much harder to check (NP-complete problem).


Let's focus on Eulerian Paths in this part. The most famous and also the first graph problem in history is **Euler’s Seven Bridges of Königsberg problem**. The problem is actually one-stroke problem(一筆畫問題) which is finding Eulerian path in an **Eulerian graph**. The one-stroke problem, or Eulerian path, is really about how the edges at each vertex must be used in pairs. In a connected graph, every time you travel into a vertex, you must also leave it by a different edge, which naturally forms an in–out pair. Because of this pairing requirement, a vertex can only support traversal without repeating edges if its degree is even: each entering edge is matched with an exiting edge. If a vertex has an odd degree, there will always be one “unpaired” edge left over, which means you would either get stuck inside the graph or be unable to start properly. The only exceptions are the starting and ending vertices of the path. The start vertex doesn't need a in-degree which makes it ok to be odd degrees, and the end vertex doesn't need a out-degree which also makes it ok to be odd degrees. Thus, the conclusion is that a connected graph admits an Eulerian circuit if all vertices have even degree, and it admits an Eulerian path (but not a circuit) if exactly two vertices have odd degree. If more than two vertices are odd, then such a traversal is impossible.

#### Euler's method to find an Eulerian path
It seems like Euler didn't provide an algorithm at least not in the modern sense. I can't find one from internet. So you need to learn two algorithms below
#### Hierholzer’s algorithm to find an Eulerian path
I also call it **Splice(拼接) method**. 
First of all, choose a vertex to start, and choose an unused edge. The precise algorithm rule is like below:
 - Start anywhere: Pick any vertex with unused edges as your starting point
 - Follow unused edges arbitrarily until you return to the starting vertex. This forms a cycle(first cycle here)
 - Pick a vertex that has unused edges
 - Start a new cycle
 - Splice the new cycle into the original cycle
 - Repeat the process until all the edges are used

Here's a simple example, {A, B, C}, two edges between A and B, and two edges between B and C:
 1. Start at A, go A->B->A. First cycle closed.
 2. There are still unused edges(B->C edges)
 3. Pick vertex B (on existing cycle) that has unused edges.
 4. Start a new cycle: B->C->B
 5. Splice into original cycle: A->B->C->B->A. Eulerian circuit completed.
#### Fleury’s Algorithm
### Hamiltonian paths and cycles

## Graph Data Representations
### Adjacency list/matrix
### Edge list

## Graph invariant
### Degree sequences
### Graph Isomophism

# Chapter 2 - Trees and Forests
## Properties of trees
## Spanning trees
## Minimum spanning trees (Prim's, Kruskal's algorithms)
## Applications in network design, coding theory

# Chapter 3 - Graph Traversal & Algorithms
## Depth-First Search (DFS)
## Breadth-First Search (BFS)
## Application: connectivity, cycle detection, topological sorting
## Shortest paths
### Dijkstra's algorithm
### Bellman-Ford algorithm
### Floyd-Warshall algorithm
## Maximum flow and min-cut (Ford-Fulkerson)

# Chapter 4 - Special Graph Classes
## Bipartite graph & matchings 
### Hall's marriage theorem
### Maximum matching (Hungarian algorithm)
## Planar graphs
### Euler characterisic for planar graphs
### Kuratowski's theorem
### Graph coloring and the Four-color Theorem
## Trees as special planar graphs

# Chapter 5 - Graph Connectivity & Network Theory
## Vertex and edge connectivity
## Menger's theorem
## Network robustness
## Application in physics (networks, percolation), CS (communication networks)

# Chapter 6 - Algebraic Graph Theory 
## Graph matrices: adjacency, Laplacian, incidence
## Eigenvalues and spectral properties
## Applications
### Network analysis
### Physics (vibrations, quantum graphs)
### Markov chains

# Chapter 7 - Topological & Advanced Graph Theory
## Graph embeddings on surface
## Genus of a graph
## Euler characteristic and its generalizations
## Graph minors and Robertson-Seymour theorem
## Graph homomorphisms

# Chapter 8 - Probabilistic and Random Graphs
## Erdős-Rényi model
## Thresholds for connectivitiy and cycles
## Applications in networks and statistical physics

# Chapter 9 - Computational Graph Theory
## Graph algorithm complexity
## NP-complete problems: 
### Hamiltonian cycle
### Graph coloring
### Clique problem
## Approximation and heuristic methods

# Chapter 10 Applications
## Physics: networks, spin systems, quantum graphs
## CS: routing, social networks, compiler design, scheduling
## Mathematics: combinatorics, topology, number theory
