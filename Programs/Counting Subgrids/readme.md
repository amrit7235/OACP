# Subgrid Counting Algorithm

This repository contains an implementation of an algorithm to count the number of subgrids in a binary grid. The algorithm is implemented in C++.

## Overview

A subgrid in a binary grid is defined as a contiguous block of cells, all containing the value `1`. Given a binary grid, this algorithm efficiently counts the number of subgrids present.

## Algorithm

### Preprocessing

The algorithm begins with preprocessing the input grid. The function `preprocess_grid()` takes the binary grid and converts it into a processed grid, where each cell of the processed grid contains a bitmask representing the presence of `1`s in a chunk of the original grid. The chunk size is determined by the constant `N`. 

### Counting Subgrids

After preprocessing, the function `count_subgrid()` is used to iterate over pairs of rows in the processed grid and count the number of common set bits in corresponding cells. This is done efficiently using the `__builtin_popcount()` function, which counts the number of set bits in an integer. 

The algorithm iterates over all pairs of rows and calculates the number of common set bits in their corresponding cells. It then accumulates these counts to determine the total number of subgrids.

### Complexity

- Preprocessing: \(O(n^2)\), where \(n\) is the size of the input grid.
- Counting Subgrids: \(O(n^2 \cdot \frac{n}{N})\), where \(N\) is the chunk size used during preprocessing.


