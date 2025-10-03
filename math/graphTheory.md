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
 - Start anywhere: Pick any vertex with unused edges as your starting point.
 - Follow unused edges of current vertex(if you A->B, then B is the current vertex) arbitrarily and go and go until you return to the starting vertex. This forms a cycle(first cycle here)
 - Pick a vertex that has unused edges in the present cycle
 - Start a new cycle
 - Splice the new cycle into the original cycle
 - Repeat the process until all the edges are used

Here's a simple example, {A, B, C}, two edges between A and B, and two edges between B and C:
 1. Start at A, go A->B->A. First cycle closed.
 2. There are still unused edges(B->C edges)
 3. Pick vertex B (on existing cycle) that has unused edges.
 4. Start a new cycle: B->C->B
 5. Splice into original cycle: A->B->C->B->A. Eulerian circuit completed.

However, in real implementation. "Splicing" idea is too juggling and complicated to implement(especially in c language). Fortunately, you can implicit splicing idea by using stack explicitly, the idea is exactly **backtracking** which you can get the details in data structure notes. The backtracking idea is that, when you are in the current vertex and you want to choose next unused edge to go, if there's no more unused edges to use in the current vertex, that means the current vertex is the end of the final path! (Because you have no way to go, so it has to be the end). In this moment, you can take the current vertex out and take it as the end of the path, and then go back to the previous vertex, and find if that vertex has unused edges or not, again and again. This is exactly what stack is doing. Here's an example demonstrates the situation, if the graph has vertices {0, 1, 2, 3}, edges {(0, 1), (1, 2), (2, 0), (0, 3), (3, 0)}, This graph must have an Eulerian circuit(because all the vertex has even degrees), let's run stack-based Hierholzer step by step and find the final Eulerian path:
 0. Initialization
    - stack = [0]
    - path = []
 1. Step 1
    - stack top: 0
    - use edge (0, 1), unused edges left: {(1, 2), (2, 0), (0, 3), (3, 0)}
    - stack = [0, 1]
    - path = []
 2. Step 2
    - Stack top: 1
    - use edge (1, 2), unused edges left: {(2, 0), (0, 3), (3, 0)}
    - stack = [0, 1, 2]
    - path = []
 3. Step 3
    - Stack top: 2
    - use edge (2, 0), unused edges left: {(0, 3), (3, 0)}
    - stack = [0, 1, 2, 0]
    - path = []
 4. Step 4
    - Stack top: 3
    - use edge (0, 3), unused edges left: {(3, 0)}
    - stack = [0, 1, 2, 0, 3]
    - path = []
 5. Step 5
    - Stack top: 4
    - use edge (3, 0), unused edges left: {}
    - stack = [0, 1, 2, 0, 3, 0]
    - path = []
 6. Step 6
    - Stack top: 5 
    - current vertex 0 has no unused edges, so backtracking
    - stack [0, 1, 2, 0, 3]
    - path = [0]
 7. Step 7
    - Stack top: 4
    - current vertex 3 has no unused edges, so backtracking
    - stack [0, 1, 2, 0]
    - path = [0, 3]
 8. Step 8
    - Stack top:3 
    - current vertex 0 has no unused edges, so backtracking
    - stack [0, 1, 2]
    - path = [0, 3, 0]
 9. Step 9
    - Stack top: 2 
    - current vertex 2 has no unused edges, so backtracking
    - stack [0, 1]
    - path = [0, 3, 0, 2]
 10. Step 10
    - Stack top: 1
    - current vertex 1 has no unused edges, so backtracking
    - stack [0]
    - path = [0, 3, 0, 2, 1]
 11. Step 11
    - Stack top: 0
    - current vertex 0 has no unused edges, so backtracking
    - stack []
    - path = [0, 3, 0, 2, 1, 0] ---> the final result would reverse: [0, 1, 2, 0, 3, 0]

Here's another situation you may consider about. Suppoes at some point you are at vertex B, with two unused edges: one to A, one to C. Suppose both A and C are dead end which means both of them has no unused edges. In this situation if you use Hierholzer's algorithm, you would meet a problem. Suppose you choose B-A first and the final path would [A], and then you backtracking to B and choose C, the final path would be [A, C, B]. You reverse it to get [B, C, A]. However, apparently there's no such path C->A in the original graph, so what's wrong here? If you take the graph only as vertices {A, B, C} and edges {(B-A), (B-C)}. You would find that it's an two odd-degrees vertices graph. So if you start Hierholzer's algorithm you should not choose B as the start vertex, but A or C, or you would definitely get wrong result. It turns out that when you meet the situation at some point at vertex B and with two unused edges, one to A, one to C. If both A and C are dead end it means either the graph has no Eulerian path or You start from the wrong vertices. The rules we mentioned before, is that, if two odd-degrees vertices then we use one of the odd-degrees vertex as the starting vertex. If all are even-degrees vertex, and you can choose any of them as the starting vertex. If after determine the graph has Eulerian path and we choose the right starting vertex and then use Hierholzer's algorithm, the considered situation we discussed about just now won't happen.

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
