# Algorithms in C++

A collection of C++ practice programs covering data structures, graph algorithms, dynamic programming, and greedy techniques. This repository is part of my learning journey as a Computer Science and Engineering student.

The goal is to understand each idea by implementing it, running examples, and improving the code over time. Suggestions and constructive feedback are welcome.

## Topics and source files

| Topic | File |
|---|---|
| Breadth-first search (BFS) | `BFS.cpp` |
| Depth-first search (DFS) | `DFS.cpp` |
| Dijkstra's shortest-path algorithm | `Dijkstra.cpp` |
| Bellman–Ford shortest-path algorithm | `Bellman-ford.cpp` |
| Floyd–Warshall all-pairs shortest paths | `Folyed-warshell.cpp` |
| Prim's minimum spanning tree | `Priems Mst.cpp` |
| Kruskal's minimum spanning tree | `krushk’s.cpp` |
| Binary search tree (BST) | `BST.cpp` |
| Longest common subsequence (LCS) | `LCS.cpp` |
| Longest increasing subsequence (LIS) | `LIS.cpp` |
| Edit distance | `MinimumED.cpp` |
| Knapsack (dynamic programming) | `Knapscak dynamic.cpp` |
| Knapsack (greedy/fractional practice) | `Factorial Knapsack.cpp` |
| Coin change | `coin.cpp` |
| Additional DP practice | `LED.cpp` |

> File names are kept as they currently exist in the repository. Some names may be renamed for clarity in a future cleanup.

## Requirements

- A C++ compiler, such as **g++**
- A terminal or IDE that can compile and run C++ programs

Check that your compiler is available:

```bash
g++ --version
```

## Compile and run a program

Each `.cpp` file is a separate practice program. From the repository folder, compile the file you want to try. For example:

```bash
g++ -std=c++17 LCS.cpp -o lcs
./lcs
```

For a source file whose name contains spaces, put the filename in quotes:

```bash
g++ -std=c++17 "Priems Mst.cpp" -o prim_mst
./prim_mst
```

On Windows, run the compiled executable with its `.exe` extension, for example `lcs.exe`.

Some programs expect input from the keyboard. Read the prompts in the terminal and provide the input requested by that program. The exact input format and output differ by source file.

## Suggested learning path

1. Start with **BFS** and **DFS** to practice graph traversal.
2. Explore **Dijkstra** and **Bellman–Ford** to compare shortest-path approaches.
3. Study **LCS**, **LIS**, **edit distance**, and **knapsack** for dynamic programming.
4. Compare **Prim** and **Kruskal** for minimum spanning trees.
5. Trace the **BST** operations using a few sample values.

## Learning goals

- Practice problem-solving and core data structures and algorithms
- Understand the ideas behind each implementation
- Improve naming, documentation, and test cases as the repository grows

## Feedback

If you find a bug or have a suggestion, feel free to open a GitHub issue with the filename, example input, expected result, and actual result. Clear, reproducible examples make problems easier to investigate.

---

**Language:** C++
