# Total Hamming Distance Calculation

This repository contains an implementation of an algorithm to calculate the total Hamming distance among all pairs of integers in a given array. The algorithm is implemented in C++.

## Overview

Hamming distance between two integers is defined as the number of positions at which the corresponding bits are different. Given an array of integers, this algorithm efficiently calculates the total Hamming distance among all pairs of integers in the array.

## Algorithm

The algorithm iterates through each bit position (from 0 to 31, considering 32-bit integers) and calculates the number of zeros and ones at that position across all integers in the array. It then accumulates the product of the counts of ones and zeros for each bit position, which represents the contribution of that bit position to the total Hamming distance.

## Complexity

- Time Complexity: \(O(32 \times n)\), where \(n\) is the number of integers in the input array.
- Space Complexity: \(O(n)\) for storing the input array.

## Usage

To use this algorithm:

1. Provide an array of integers as input.
2. Call the `totalHammingDistance()` function with the input array.
3. The function returns the total Hamming distance among all pairs of integers in the array.

## Example

```cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Definition of totalHammingDistance() function...

void solve(){
    ll n;
    cin >> n;

    vector<int> nums(n);

    for(int i =0;i<n;i++){
        ll a;
        cin >> a;
        nums[i] = a;
    }

    cout << totalHammingDistance(nums) << endl;
}

int main(){
    int t = 1;
    while(t--){
        solve();
    }
}
