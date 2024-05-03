# Valid Arrangement of Pairs

This C++ program finds a valid arrangement of pairs of numbers. It constructs an Eulerian path based on the given pairs and outputs the arrangement if found.

## Algorithm Explanation

The algorithm used in this program is based on finding an Eulerian path in a graph. Here's how it works:

1. **Constructing the Adjacency List**: The algorithm first constructs an adjacency list representation of the graph. It iterates through the given pairs of numbers and creates a mapping from each node to its adjacent nodes.

2. **Counting Degrees**: For each node in the graph, the algorithm calculates its in-degree and out-degree. The in-degree of a node is the number of edges pointing into it, while the out-degree is the number of edges pointing out of it.

3. **Finding the Starting Node**: Next, the algorithm looks for a starting node for the Eulerian path. It does this by examining the difference between the in-degree and out-degree of each node. If there's a node where the difference is `1`, it selects that node as the starting node. If no such node exists, it chooses any node as the starting node.

4. **Eulerian Path Construction (DFS)**: The algorithm then constructs the Eulerian path using a depth-first search (DFS) approach. It starts from the selected starting node and explores edges recursively. It ensures that it exhausts all edges from each node before backtracking.

5. **Postorder Traversal**: During the DFS traversal, the algorithm performs a postorder traversal. This means that it adds an edge `(u, v)` to the output path after exploring the subtree rooted at node `v`. This ensures that the output path is in the correct order.

6. **Reversing the Path**: After constructing the path, the algorithm reverses it. This is necessary because the path was constructed in a postorder traversal, which means it's in the reverse order of the final Eulerian path.

7. **Output**: Finally, the algorithm outputs the valid arrangement of pairs, which represents the Eulerian path in the graph. If no valid arrangement is found, it indicates that there's no Eulerian path in the graph.
