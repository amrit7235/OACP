# Maximum Value of Rotation Function

This algorithm is used to find the maximum value of a rotation function for a given integer array. A rotation function is defined as follows:

F(k) = 0 * arr[k] + 1 * arr[(k + 1) % n] + ... + (n - 1) * arr[(k + n - 1) % n]


where `arr[]` is the input array and `n` is the size of the array.

## Problem Statement

Given an integer array `nums` of length `n`, the task is to find the maximum value of the rotation function \( F(k) \), where \( F(k) \) is defined as above.

## Algorithm

1. **Calculate Array Sum**:
   - Iterate through the input array `nums` and calculate the sum of all elements. This sum will be used in subsequent calculations.

2. **Calculate Initial Value of Rotation Function (F(0))**:
   - Iterate through the input array `nums` and calculate the initial value of the rotation function (\( F(0) \)) by summing up \( i \times \text{nums}[i] \) for each index `i`.

3. **Initialize Variables**:
   - Initialize variables to keep track of the current and previous values of the rotation function (\( \text{cur\_ans} \) and \( \text{prev\_ans} \)).

4. **Iterate for Rotations**:
   - Iterate from `1` to `n-1` to simulate rotations of the array.
   - For each rotation, update the value of the rotation function based on the previous rotation.
   - Update the maximum value of the rotation function found so far (`cur_ans`).

5. **Return Maximum Value of Rotation Function**:
   - Finally, return the maximum value of the rotation function (\( \text{cur\_ans} \)).

## Implementation

The algorithm can be implemented in any programming language, such as C++, Python, Java, etc. Below is an example implementation in C++:

```cpp
// C++ code for finding the maximum value of a rotation function

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        // Implementation of the algorithm
        // (See the provided C++ code for details)
    }
};

# Time Complexity
The time complexity of this algorithm is 

O(n), where 

n is the size of the input array.